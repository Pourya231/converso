#include "login.h"
#include "chatroom.h"
#include "ui_login.h"
#include "QMessageBox"
#include "QIntValidator"
#include "iostream"
#include "code.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QPainterPath>
#include <QPainter>
#include <QtMath>
#include <qgraphicsscene.h>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/qnetworkreply.h>
#include <QtNetwork/QNetworkRequest>
#include "chose_name.h"
#include "QFile"
#include "QTextStream"

using namespace std;
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
//converso app
////hi every body
/// this comment belongs Amir
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");

  //  QSqlDatabase::drivers()
   // db.setDatabaseName("C:\\Users\\user\\Desktop\\project\\converso-main\\1.db");
      db.setDatabaseName("C:\\Users\\pourya\\Desktop\\1.db");
   // db.open();
   // db.setHostName("127.0.0.1");
   // db.setPort(15226);
  //  db.setDatabaseName("C:\\Users\\pourya\\Desktop\\converso.mwb");
  //  db.setUserName("root");
  //  db.setPassword("Pouryaalvani98!");

    //db.setDatabaseName("C:\\Users\\user\\Desktop\\project\\converso-main\\1.db");
    //db.setDatabaseName("C:\\Users\\pourya\\Desktop\\1.db");
    db.open();


    if(db.open()){
        qDebug()<<"yesss";
    }
    else
        qDebug()<<"sheeet";
    //login::setEnabled(false);
    ui->setupUi(this);
    ui->groupBox_2->hide();
    ui->lineEdit_7->setReadOnly(true);
    ui->lineEdit_6->setValidator(new QIntValidator);

    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);font: 75 10pt ;");
    }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""))
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);font: 75 10pt ;");
    }

    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()=="")
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);font: 75 10pt ;");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);font: 75 10pt ;");
    }
    ui->label_13->hide();
    ui->label_14->hide();
     ui->label_15->hide();
      QSqlQuery z;
      //QSqlQuery T;
         z.exec("SELECT username FROM person WHERE c=1 ");
       if(z.next()){
      QString name=z.value(0).toString();
       //QString pass=z.value(1).toString();
       ui->lineEdit->setText(name);
      // ui->lineEdit_2->setText(pass);
       }
       z.exec("SELECT password FROM person WHERE c=1 ");
       if(z.next()){

       QString pass=z.value(0).toString();

       ui->lineEdit_2->setText(pass);
       ui->checkBox->setChecked(true);
       }

      ui->pushButton_9->setStyleSheet("QPushButton { border: none; }");
      ui->pushButton_9->setStyleSheet("QPushButton { color: blue; text-decoration: underline; }");

}

login::~login()
{
    delete ui;

}

int login::check_user(QString str)
{
    if (str.contains("&")||str.contains("$")||str.contains("#")||str.contains("%")||str.contains("@")||str.contains("^")||str.contains("*")||str.contains("!"))
        return 1;
    else
        return 0;
}

QString login::captcha(int n)
{
    time_t t;
    srand((unsigned)time(&t));
    //char *required_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    QString Captcha = "";
    while(n--)
        //Captcha.push_back(required_chars[rand()%62]);
    return Captcha;
}



void login::on_pushButton_clicked()
{
    if(ui->lineEdit_2->echoMode()==QLineEdit::Normal)
    {
       //  ui->pushButton->setStyleSheet("QPushButton { border: none; }");
        ui->pushButton->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye2.jpg); border: none; }");

        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
    else
    {
         // ui->pushButton->setStyleSheet("QPushButton { border: none; }");
          ui->pushButton->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye1.jpg); border: none; }");
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    }

}

 Captcha cp;

void login::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);font: 75 10pt ;");
    }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""))
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);font: 75 10pt ;");
    }
}

// the two functions below belogs to make the sign in fields visible only when the push buttons are clicked.
void login::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);font: 75 10pt ;");
    }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""))
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);font: 75 10pt ;");
    }
}
void login::on_pushButton_5_clicked()
{
    if(ui->lineEdit_8->echoMode()==QLineEdit::Normal)
    {
        ui->pushButton_7->setStyleSheet("image: url(:/new/prefix1/eye2.jpg);");
        ui->lineEdit_8->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->pushButton_7->setStyleSheet("image: url(:/new/prefix1/eye1.jpg);");
        ui->lineEdit_8->setEchoMode(QLineEdit::Normal);
    }
}

QString cap;

void login::on_pushButton_3_clicked()
{
      cap=captcha(5);
      ui->label_13->hide();
      ui->label_14->hide();
      ui->label_15->hide();
    ui->groupBox->hide();
    ui->groupBox_2->move(320,0);
    ui->lineEdit_8->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_9->setText("");
    ui->comboBox->setCurrentIndex(0);
    ui->lineEdit_7->setText("+98");
    ui->radioButton->setChecked(false);
      ui->pushButton_8->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye2.jpg); border: none; }");
        ui->pushButton_7->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye2.jpg); border: none; }");
    ui->label_4->setText(cap);
    QPainter painter(this);
    cp.randomize();
    cp.setDifficulty(2);
    //cp.loadDictionary("dictionary.txt");
    //cp.setTextGeneration(Captcha::TextGeneration_Dictionary);
    cp.generateText();
    cp.captchaText();
    QImage img(cp.captchaImage());
    ui->label_4->setPixmap(QPixmap::fromImage((img)));
}

void login::on_pushButton_4_clicked()
{
    if(!(ui->lineEdit_8->text()==""||ui->lineEdit_3->text()==""||ui->lineEdit_6->text()==""))
    {
      if(!(ui->lineEdit_3->text().length()<8||ui->lineEdit_8->text().length()<8||ui->lineEdit_9->text().length()<8))
        {
          if(check_user(ui->lineEdit_3->text())==0)
          {
              if(check_user(ui->lineEdit_8->text()))
              {
                  if(ui->lineEdit_9->text()==ui->lineEdit_8->text())
                  {
                      if(ui->lineEdit_5->text()==cp.captchaText())
                      {
                        QSqlQuery p;
                        QSqlQuery q;
                           QSqlQuery qq;
                        QString user;
                        QString pass;
                        QString phone;
                        user=ui->lineEdit_3->text();
                        pass=ui->lineEdit_8->text();
                        phone=ui->lineEdit_6->text();
                        q.exec("SELECT username FROM person WHERE username='"+user+"' ");

                        if(!(q.first()))
                        {
                               p.exec("INSERT INTO person VALUES('"+user+"','"+pass+"','"+phone+"',0,0)");
                             //  p.bindValue(":id",id);
                            ui->groupBox_2->hide();
                            login::hide();
                            code * w3=new code;
                            w3->show();
                        }
                        else
                            QMessageBox::warning(this,"notic","This username has been used");
                  }
                    else
                    {
                        QMessageBox::warning(this,"notic","incorrect code");
                    }
                }
                else
                    QMessageBox::warning(this,"notic","password not match");
            }
            else
                QMessageBox::warning(this,"notic","Your password must contain special symbols");
        }
        else
            QMessageBox::warning(this,"notic","Your username should not contain special symbols");
      }
     else
        QMessageBox::warning(this,"notic","Password and username must have at least 8 characters");
    }
    cp.generateText();
    QImage img(cp.captchaImage());
    ui->label_4->setPixmap(QPixmap::fromImage((img)));
}

// the comboBox below belogs to sign up page when the number is asked.
void login::on_comboBox_activated(int index)
{
    switch (index)
    {
        case 0:
        //iran
            ui->lineEdit_7->setText("+98");
            ui->lineEdit_7->setMaxLength(10);
            break;
        case 1:
        //canada
            ui->lineEdit_7->setText("+1"); break;
        case 2:
        //china
            ui->lineEdit_7->setText("+86"); break;
        case 3:
        //egypt
            ui->lineEdit_7->setText("+20"); break;
        case 4:
        //germany
            ui->lineEdit_7->setText("+49"); break;
        case 5:
        //india
            ui->lineEdit_7->setText("+91"); break;
        case 6:
        //iraq
            ui->lineEdit_7->setText("+964"); break;
        case 7:
        //japan
            ui->lineEdit_7->setText("+81"); break;
        case 8:
        //spain
            ui->lineEdit_7->setText("+34"); break;
        case 9:
        //Turkey
            ui->lineEdit_7->setText("+90"); break;
        case 10:
        //USA
            ui->lineEdit_7->setText("+1"); break;
    }
}

// the 5 functions below belogs to make the sign up push button enabled only when the field are filled.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void login::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()=="")
        ui->label_13->hide();
    else if(ui->lineEdit_3->text().length()<8||check_user(ui->lineEdit_3->text())){
        ui->label_13->show();
        ui->label_13->setStyleSheet("color: rgb(170, 0, 0);font: 13pt;");
    }
    else{
        ui->label_13->show();
        ui->label_13->setStyleSheet("color: rgb(0, 170, 0);font: 13pt;");
    }

    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked())
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked()))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}


void login::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked())
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked()))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}


void login::on_lineEdit_5_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked())
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked()))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}


void login::on_lineEdit_6_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked())
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked()))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}

void login::on_lineEdit_9_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_9->text()=="")
        ui->label_15->hide();
    else if(ui->lineEdit_9->text().length()<8||!check_user(ui->lineEdit_9->text())||ui->lineEdit_9->text()!=ui->lineEdit_8->text()){
        ui->label_15->show();
        ui->label_15->setStyleSheet("color: rgb(170, 0, 0);font: 13pt;");
    }
    else{
        ui->label_15->show();
        ui->label_15->setStyleSheet("color: rgb(0, 170, 0);font: 13pt;");
    }

    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked())
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked()))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void login::on_pushButton_2_clicked()
{

 //  QFile file("C:\\Users\\user\\Desktop\\project\\converso-main\\user.txt");
    QFile file("C:/Users/pourya/desktop/user.txt");

    if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
      exit(1);

    }
    QTextStream in(&file);
    file.resize(0);
 //   QSqlQuery q;
    QString U=ui->lineEdit->text();
    QString P=ui->lineEdit_2->text();
    //  QSqlQuery R;
      QSqlQuery p;
       QSqlQuery z;
       //  QSqlQuery D;
    p.exec("SELECT username FROM person WHERE username= '"+U+"'  AND password= '"+P+"' ");

    if(p.first())
    {
        if(ui->checkBox->isChecked()){
        p.exec("UPDATE person SET c='1'  WHERE username= '"+U+"' ");
        p.exec("UPDATE person SET c='0'  WHERE username!='"+U+"' ");
        }
        else
            p.exec("UPDATE person SET c='0'");

        in<<U<<endl;

       z.exec("SELECT name FROM person WHERE name!= '0' AND username='"+U+"'");
       chose_name * NAME=new chose_name;
        chatroom * CHAT=new chatroom;
       if(z.first())
         CHAT->show();
         else
        NAME->show();
       login::hide();
       file.close();
    }
    else
       QMessageBox::warning(this,"notice","inccorect passowrd or user");
}


void login::on_pushButton_6_clicked()
{
     cap=captcha(5);
     ui->label_4->setText(cap);
     QPainter painter(this);
     cp.randomize();
     cp.setDifficulty(2);
     //cp.loadDictionary("dictionary.txt");
     //cp.setTextGeneration(Captcha::TextGeneration_Dictionary);
     cp.generateText();
     QImage img(cp.captchaImage());
     //painter.drawImage(0,0, cp.captchaImage());
     //setStyleSheet("background-image: url(:img);")
     ui->label_4->setPixmap(QPixmap::fromImage((img)));
}


void login::on_pushButton_7_clicked()
{
    if(ui->lineEdit_8->echoMode()==QLineEdit::Normal)
    {
        ui->pushButton_7->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye2.jpg); border: none; }");
        ui->lineEdit_8->setEchoMode(QLineEdit::Password);
    }
    else
    {
         ui->pushButton_7->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye1.jpg); border: none; }");
        ui->lineEdit_8->setEchoMode(QLineEdit::Normal);
    }
}

void login::on_pushButton_8_clicked()
{
    if(ui->lineEdit_9->echoMode()==QLineEdit::Normal)
    {
         ui->pushButton_8->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye2.jpg); border: none; }");
        ui->lineEdit_9->setEchoMode(QLineEdit::Password);
    }
    else
    {
         ui->pushButton_8->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye1.jpg); border: none; }");
        ui->lineEdit_9->setEchoMode(QLineEdit::Normal);
    }
}
void login::paintEvent(QPaintEvent *)
{
    /*QPainter painter(this);
    cp.randomize();
    cp.setDifficulty(2);
    cp.loadDictionary("dictionary.txt");
    cp.setTextGeneration(Captcha::TextGeneration_Dictionary);
    cp.generateText();
    cp.captchaText();
    QImage img(cp.captchaImage());
    //painter.drawImage(0,0, cp.captchaImage());
    //setStyleSheet("background-image: url(:img);")
    ui->label_4->setPixmap(QPixmap::fromImage((img)));*/
}



void login::on_backlogin_clicked()
{
    ui->groupBox->show();
    ui->groupBox_2->hide();
     ui->pushButton->setStyleSheet("QPushButton{image: url(:/new/prefix1/eye2.jpg); border: none; }");
     ui->lineEdit_2->setEchoMode(QLineEdit::Password);
     if(!(ui->checkBox->isChecked())){
         ui->lineEdit->setText("");
         ui->lineEdit_2->setText("");
     }

}

// the push button 9 belongs to the privacy policy.
void login::on_pushButton_9_clicked()
{
    QMessageBox::information(this, "Privacy Policy", "Terms of Service"
                             "By signing up for Converso, you accept our Privacy Policy and agree not to:"
                             "<ul><li>Use our service to send spam or scam users.</li>"
                             "<li>Promote violence on publicly viewable Converso channels, bots, etc.</li>"
                             "<li>Post illegal pornographic content on publicly viewable Converso channels, bots, etc.</li>"
                             "<li>We reserve the right to update these Terms of Service later.</li>"
                             "<li>Citizens of EU countries and the United Kingdom must be at least 16 years old to sign up.</li></ul>");
}

void login::on_radioButton_clicked()
{
    if(ui->lineEdit_8->text().length()<8||ui->lineEdit_3->text().length()<8||ui->lineEdit_9->text().length()<8||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked())
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_8->text().length()<8||ui->lineEdit_3->text().length()<8||ui->lineEdit_9->text().length()<8||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked()))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}


void login::on_lineEdit_8_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_8->text()=="")
        ui->label_14->hide();
    else if(ui->lineEdit_8->text().length()<8||!check_user(ui->lineEdit_8->text())){
        ui->label_14->show();
        ui->label_14->setStyleSheet("color: rgb(170, 0, 0);font: 13pt;");
    }
    else{
        ui->label_14->show();
        ui->label_14->setStyleSheet("color: rgb(0, 170, 0);font: 13pt;");
    }
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked())
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""||!ui->radioButton->isChecked()))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}
