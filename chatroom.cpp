#include "chatroom.h"
#include "ui_chatroom.h"
#include <QByteArray>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "QFile"
#include "QTextStream"
chatroom::chatroom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chatroom)
   , m_nNextBlockSize(0)
{
    ui->setupUi(this);
    ui->lineEdit_2->setReadOnly(true);
    socket = new QTcpSocket(this);
     socket->connectToHost("127.0.0.1", 4563);
        ui->plainTextEdit->setReadOnly(true);


     QSqlDatabase db;
     db=QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("C:/Users/pourya/Desktop/database.db");
     db.open();
     QFile file1("C:/Users/pourya/desktop/user.txt");

     if(!file1.open(QIODevice::ReadWrite | QIODevice::Text))
     {
       exit(1);

     }
     QTextStream out(&file1);
     QString line;
     line=out.readLine();
     ui->lineEdit_2->setText(line);
 //  QString filepath;

     QString sendmesage;

     sendmesage=ui->lineEdit_2->text();

     QByteArray  arrBlock;
     QDataStream outt(&arrBlock, QIODevice::WriteOnly);
     outt.setVersion(QDataStream::Qt_5_0);
     outt << quint16(0) << sendmesage;
     outt.device()->seek(0);
     outt << quint16(arrBlock.size() - sizeof(quint16));

     socket->write(arrBlock);
    first=0;

    connect(socket, SIGNAL(readyRead()), this, SLOT(newConnection()));


}

chatroom::~chatroom()
{
    socket->close();
    delete ui;
}

void chatroom::newConnection()
{

    QString recvmessage = "";
      QDataStream in(socket);
      in.setVersion(QDataStream::Qt_4_5);
      for (;;) {
          if (!m_nNextBlockSize) {
              if (socket->bytesAvailable() < sizeof(quint16)) {
                  break;
              }
              in >> m_nNextBlockSize;
          }

          if (socket->bytesAvailable() < m_nNextBlockSize) {
              break;
          }
          QString str;
          in >> str;

          recvmessage += str;
          m_nNextBlockSize = 0;
      }
      QString clientIsD=recvmessage.mid(0,recvmessage.indexOf(':'));
      recvmessage=recvmessage.mid(recvmessage.indexOf(':')+1,recvmessage.length());


    if(first!=0) {

         ui->plainTextEdit->appendPlainText(clientIsD+":"+recvmessage); // îòîáðàæàåì ñòðîêó â plainTextEdit
     }
    first=1;

}

void chatroom::on_pushButton_clicked()
{
    //���������� �����
    QString sendmesage;

    sendmesage=ui->lineEdit_3->text() + ":" + ui->lineEdit->text(); ;

    QByteArray  arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_0);
    out << quint16(0) << sendmesage;
    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));

    socket->write(arrBlock);
    ui->lineEdit->setText("");
}
