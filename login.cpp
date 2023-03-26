#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include "QIntValidator"
#include "iostream"
#include "code.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{

    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/pourya/Desktop/qt/telegram/database.db");
    db.open();

    ui->setupUi(this);
    ui->groupBox_2->hide();
    ui->lineEdit_7->setReadOnly(true);

    ui->lineEdit_6->setValidator(new QIntValidator);
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""){
       ui->pushButton_2->setEnabled(false);
       ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);");
   }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")){
        ui->pushButton_2->setEnabled(true);
         ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);");
   }

    if(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()==""){
       ui->pushButton_4->setEnabled(false);
       ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
   }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()=="")){
        ui->pushButton_4->setEnabled(true);
         ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
   }

}

login::~login()
{
    delete ui;

}

int login::check_user(QString str){
        if (str.contains("&")||str.contains("$")||str.contains("#")||str.contains("%")||str.contains("@")||str.contains("^")||str.contains("*"))
                return 1;
        else
                return 0;
}
QString login::captcha(int n){
    time_t t;
      srand((unsigned)time(&t));
      char *required_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
      QString Captcha = "";
      while(n--)
          Captcha.push_back(required_chars[rand()%62]);
      return Captcha;
}



void login::on_pushButton_clicked()
{
    if(ui->lineEdit_2->echoMode()==QLineEdit::Normal){
          ui->pushButton->setStyleSheet("image: url(:/new/prefix1/eye2.jpg);");
          ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
    else{
         ui->pushButton->setStyleSheet("image: url(:/new/prefix1/eye1.jpg);");
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    }

}










void login::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""){
       ui->pushButton_2->setEnabled(false);
       ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);");
   }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")){
        ui->pushButton_2->setEnabled(true);
         ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);");
   }
}


void login::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""){
       ui->pushButton_2->setEnabled(false);
       ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);");
   }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")){
        ui->pushButton_2->setEnabled(true);
         ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);");
   }
}


void login::on_pushButton_5_clicked()
{
    if(ui->lineEdit_4->echoMode()==QLineEdit::Normal){
          ui->pushButton_5->setStyleSheet("image: url(:/new/prefix1/eye2.jpg);");
          ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    }
    else{
         ui->pushButton_5->setStyleSheet("image: url(:/new/prefix1/eye1.jpg);");
        ui->lineEdit_4->setEchoMode(QLineEdit::Normal);
    }
}

QString cap;
void login::on_pushButton_3_clicked()
{
      cap=captcha(5);
    ui->groupBox->hide();
    ui->groupBox_2->move(250,100);
    ui->lineEdit_4->setText("");
     ui->lineEdit_3->setText("");
      ui->lineEdit_6->setText("");
       ui->lineEdit_5->setText("");
      ui->comboBox->setCurrentIndex(0);
    ui->label_4->setText(cap);
}


void login::on_pushButton_4_clicked()
{

    if(!(ui->lineEdit_4->text()==""||ui->lineEdit_3->text()==""||ui->lineEdit_6->text()=="")){
       if(check_user(ui->lineEdit_3->text())==0){
        if(check_user(ui->lineEdit_4->text())){
          if(ui->lineEdit_5->text()==cap){

           QSqlQuery p;
            QSqlQuery q;
           QString user;
           QString pass;
            QString phone;
           user=ui->lineEdit_3->text();
           pass=ui->lineEdit_4->text();
           phone=ui->lineEdit_6->text();
           q.exec("SELECT username FROM person WHERE username='"+user+"' ");
           if(!(q.first())){

           p.exec("INSERT INTO person VALUES('"+user+"','"+pass+"','"+phone+"')");

           ui->groupBox_2->close();
           ui->groupBox->show();
            QMessageBox::information(this,"notic","Your account has been successfully created");
           }
           else
             QMessageBox::warning(this,"notic","This username has been used");
           }
          else{
             QMessageBox::warning(this,"notic","incorrect code");
          }
        }
       else
              QMessageBox::warning(this,"notic","Your password must contain special symbols");
       }
       else
             QMessageBox::warning(this,"notic","Your username should not contain special symbols");
    }
    cap=captcha(5);
     ui->label_4->setText(cap);
}


void login::on_comboBox_activated(int index)
{
    switch (index) {
        case 0:
        //iran
            ui->lineEdit_7->setText("+98");
            ui->lineEdit_7->setMaxLength(10);
            break;
        case 1:
        //china
              ui->lineEdit_7->setText("+86");
            break;

        case 2:
        //USA
              ui->lineEdit_7->setText("+1");
            break;

         case 3:
        //canada
             ui->lineEdit_7->setText("+1");
            break;
        case 4:
        //egypt
             ui->lineEdit_7->setText("+20");
            break;

         case 5:
        //germany
              ui->lineEdit_7->setText("+49");
              break;
        case 6:
          //india
            ui->lineEdit_7->setText("+91");
             break;
        case 7:
           //iraq
            ui->lineEdit_7->setText("+964");
                break;
        case 8:
           //japan
            ui->lineEdit_7->setText("+81");
               break;
        case 9:
           //spain
            ui->lineEdit_7->setText("+34");
               break;
        case 10:
           //Turkey
           ui->lineEdit_7->setText("+90");
              break;
    }
}


void login::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()==""){
       ui->pushButton_4->setEnabled(false);
       ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
   }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()=="")){
        ui->pushButton_4->setEnabled(true);
         ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
   }
}


void login::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()==""){
       ui->pushButton_4->setEnabled(false);
       ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
   }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()=="")){
        ui->pushButton_4->setEnabled(true);
         ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
   }
}


void login::on_lineEdit_6_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()==""){
       ui->pushButton_4->setEnabled(false);
       ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
   }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_6->text()=="")){
        ui->pushButton_4->setEnabled(true);
         ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
   }
}


void login::on_pushButton_2_clicked()
{
    QSqlQuery q;
    QString U=ui->lineEdit->text();
    QString P=ui->lineEdit_2->text();
    q.exec("SELECT username FROM person WHERE username= '"+U+"'  AND password= '"+P+"' ");

   if(q.first()){
       login::close();
       code * w3=new code;
    w3->show();

   }
   else
       QMessageBox::warning(this,"notice","inccorect passowrd or user");
}


void login::on_pushButton_6_clicked()
{
     cap=captcha(5);
      ui->label_4->setText(cap);
}

