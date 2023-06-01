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
     socket->connectToHost("87.248.155.130", 15226);
      // ui->->setReadOnly(true);
     //   ui->groupBox_2->setEnabled(false);
        ui->pushButton->hide();
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
     ui->listWidget->setIconSize(QSize(60,60));
         ui->listWidget_2->setIconSize(QSize(80,80));
    connect(socket, SIGNAL(readyRead()), this, SLOT(newConnection()));


}

chatroom::~chatroom()
{
    socket->close();
    delete ui;
}
int NUM=0;
int doub=0;

void chatroom::newConnection()
{
      QString clientIsD;
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


      if(doub>1){

          clientIsD=ui->listWidget->currentItem()->text();
         recvmessage=recvmessage.mid(recvmessage.indexOf(':')+1,recvmessage.length());
         ui->listWidget_2->addItem(recvmessage);
         ui->listWidget_2->item(NUM)->setIcon(QIcon("D:/project2/converso/image_profile/"+clientIsD+".png"));

         NUM++;
      }
      doub++;




}

void chatroom::on_pushButton_clicked()
{
    //���������� �����

    QString sendmesage;
    QString client_send;
    client_send=ui->listWidget->currentItem()->text();
    sendmesage=client_send + ":" + ui->lineEdit->text(); ;

    QByteArray  arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_0);
    out << quint16(0) << sendmesage;
    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));
    socket->write(arrBlock);
    ui->listWidget_2->addItem(sendmesage.mid(sendmesage.indexOf(":")+1,sendmesage.length())); // îòîáðàæàåì ñòðîêó â plainTextEdit
    ui->listWidget_2->item(NUM)->setIcon(QIcon("D:/project2/converso/image_profile/"+line+".png"));

    NUM++;
    ui->lineEdit->setText("");
}
int num=-1;
void chatroom::on_pushButton_2_clicked()
{
   bool check=false;
    QSqlQuery p;
    QString ID;
    ID=ui->lineEdit_3->text();
    p.exec("SELECT username FROM person WHERE username='"+ID+"' ");
     ui->lineEdit_3->setText("");
    if (p.first()){
         for(int i=0;i<ui->listWidget->count();i++){
             if(ui->listWidget->item(i)->text()==ID){
                 check=true;
                 break;
             }
         }
         if(!check && p.value(0).toString()!=line){
        num++;
        ui->listWidget->addItem(ID);
        ui->listWidget->item(num)->setIcon(QIcon("D:/project2/converso/image_profile/"+ID+".png"));

         ui->groupBox_2->setEnabled(true);
         }
    }

}


void chatroom::on_listWidget_currentRowChanged(int currentRow)
{
   ui->listWidget_2->clear();
   NUM=0;
}


void chatroom::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()=="")
        ui->pushButton->hide();
    else
        ui->pushButton->show();

}

