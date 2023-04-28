#include "chose_name.h"
#include "ui_chose_name.h"
#include "QFileDialog"
#include "QHBoxLayout"
#include "QBitmap"
#include "QPainter"
#include "chatroom.h"
#include "ui_chatroom.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "QFile"
chose_name::chose_name(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chose_name)
{
    ui->setupUi(this);
     QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
      db.setDatabaseName("C:/Users/pourya/Desktop/database.db");
      db.open();


      connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(openimage()));
        ui->pushButton->setStyleSheet("QPushButton { border: none; }");

        ui->pushButton->setStyleSheet("QPushButton {border:none;background-color: rgb(108, 66, 234);;  font: 11pt;}");

        chose_name::move(300,20);


}

chose_name::~chose_name()
{
    delete ui;
}


void chose_name::openimage(){
    QStringList filters;
    QString filename =QFileDialog::getOpenFileName(this,tr("Open Image"),".",("File (  *.png *.jpg *.jpeg)"));
    if(!filename.isEmpty()){
        QImage image(filename);
       // QString SET=QString(" border:1px solid black;x;border-radius:100%;background-image:url(%1);").arg(filename);
        // QPainter painter(&pixmap);
       //  painter.setRenderHint(QPainter::Antialiasing,true);
        image=image.scaled(300,300);
        ui->label->setStyleSheet(" border:1px solid black;x;border-radius:100%;border-image:url('"+filename+"');");
        ui->PushButton->setText("change photo");
       // ui->label->setPixmap(QPixmap(filename));

    }

}


void chose_name::on_PushButton_clicked()
{

 //  ui->label_2->setText(line);

    if(ui->lineEdit->text().length()>4){

        QFile file("C:\\Users\\pourya\\desktop\\user1.txt");

        if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
        {
          exit(1);

        }
       QTextStream outt(&file);
       QString line;
       line=outt.readLine();

       QSqlQuery p;
        QString NAME;
        NAME=ui->lineEdit->text();
        p.exec("UPDATE  person SET name='"+NAME+"'  WHERE username='"+line+"' ");

    chatroom *w1=new chatroom;
    chose_name::setVisible(false);
    w1->show();
}

}

