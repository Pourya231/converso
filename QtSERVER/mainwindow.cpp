#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "QFile"
#include "QTextStream"
//???????????
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    , m_nNextBlockSize(0)
{

    ui->setupUi(this);
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/pourya/Desktop/database.db");
    db.open();

    server = new QTcpServer(this);
    //?????????? ????????
    client_i=0;

}

//??????????
MainWindow::~MainWindow()
{
    //????????? ?????
    server->close();
    delete ui;
}
int onetime=1;
//?????? ???????????
void MainWindow::newConnection()
{
    onetime=1;
    client_i++;
    socket[client_i] = new QTcpSocket(this);
    //qDebug() << "ID = " <<client_i;
    socket[client_i]=server->nextPendingConnection();
    QString ClientID="ID="+QString::number(client_i);
    QByteArray  arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_5);
    out << quint16(0) << ClientID;

    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));

    socket[client_i]->write(arrBlock);

    connect(socket[client_i], SIGNAL(readyRead()), this, SLOT(readMessage()));
   // listuser[client_i]=esm;
}


void MainWindow::readMessage()
{
     int userID;
    int otpr=0;
    QString recvmessage = "";
    QString clientID;
    for(int i=1;i<=client_i;i++)
    {
        QDataStream in(socket[i]);
        in.setVersion(QDataStream::Qt_4_5);

        for (;;) {
            if (!m_nNextBlockSize) {
                if (socket[i]->bytesAvailable() < sizeof(quint16)) {
                    break;
                }
                in >> m_nNextBlockSize;
            }

            if (socket[i]->bytesAvailable() < m_nNextBlockSize) {
                break;
            }
            QString str;
            in >> str;

            recvmessage += str;
            if(onetime==1){
               listuser[client_i]=recvmessage;
            ui->plainTextEdit_2->appendPlainText(recvmessage);
           onetime=0;
            }
            else{


            otpr=i;
            m_nNextBlockSize = 0;

            //qDebug() <<"2 str = "<<recvmessage;
            clientID=recvmessage.mid(0,recvmessage.indexOf(':'));

            for(int z=1;z<=client_i;z++)
            {
                if(listuser[z]==clientID){
                    userID=z;
                       ui->plainTextEdit_2->appendPlainText(QString::number(userID));
                }
            }
            //qDebug() <<"3";
            recvmessage=recvmessage.mid(recvmessage.indexOf(':')+1,recvmessage.length()); // ?????? ?? ?????? ??????????
            //qDebug() <<"4 ID = " <<clientID;

            //*******************************
            if(userID>0 && userID<=client_i)
            {
                QByteArray  arrBlock;
                QDataStream out(&arrBlock, QIODevice::WriteOnly);
                out.setVersion(QDataStream::Qt_4_5);
                out << quint16(0) << recvmessage;

                out.device()->seek(0);
                out << quint16(arrBlock.size() - sizeof(quint16));

                socket[userID]->write(arrBlock);
            }
          }
        }

    }



    if(userID>0 &&  userID<=client_i&&onetime==0)
    {
    ui->plainTextEdit_2->appendPlainText(QString::number(otpr)+" -> "+QString::number(userID) + "::" + recvmessage);
    }


}

//??? ??????? ?????? "start server"
void MainWindow::on_pushButton_clicked()
{
    //??????? ???????????? SIGNAL SLOT ???? ??????????? ???????
    connect(server,SIGNAL(newConnection()),this, SLOT(newConnection()));
    //????????? ?????? (??????????? ????? ? ?????? IP ?? ???? 4563)
    if(!server->listen(QHostAddress::Any,4563))
    {
        ui->plainTextEdit->appendPlainText("NO STARTED");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("STARTED");
        ui->plainTextEdit_2->appendPlainText("WAIT MESSAGE");
    }
}
