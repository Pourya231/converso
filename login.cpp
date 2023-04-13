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
#include <QPainterPath>
#include <QPainter>
#include <QtMath>
#include <qgraphicsscene.h>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/qnetworkreply.h>
#include <QtNetwork/QNetworkRequest>
using namespace std;
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{

////hi every body
/// this comment belongs Amir
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/pourya/Desktop/database.db");
    db.open();

    ui->setupUi(this);
    ui->groupBox_2->hide();
    ui->lineEdit_7->setReadOnly(true);
    ui->lineEdit_6->setValidator(new QIntValidator);

    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""))
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);");
    }

    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()=="")
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
      QSqlQuery z;
      QSqlQuery T;
         z.exec("SELECT username FROM person WHERE c=1 ");
       if(z.next()){
      QString name=z.value(0).toString();
       //QString pass=z.value(1).toString();
       ui->lineEdit->setText(name);
      // ui->lineEdit_2->setText(pass);
       }
       T.exec("SELECT password FROM person WHERE c=1 ");
       if(T.next()){

       QString pass=T.value(0).toString();

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
    char *required_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    QString Captcha = "";
    while(n--)
        Captcha.push_back(required_chars[rand()%62]);
    return Captcha;
}



void login::on_pushButton_clicked()
{
    if(ui->lineEdit_2->echoMode()==QLineEdit::Normal)
    {
        ui->pushButton->setStyleSheet("image: url(:/new/prefix1/eye2.jpg);");
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->pushButton->setStyleSheet("image: url(:/new/prefix1/eye1.jpg);");
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    }

}

 Captcha cp;

void login::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""))
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}

// the two functions below belogs to make the sign in fields visible only when the push buttons are clicked.
void login::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""))
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_2->setStyleSheet("background-color: rgb(85, 88, 255);");
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
    ui->groupBox->hide();
    ui->groupBox_2->move(240,0);
    ui->lineEdit_8->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_5->setText("");
    ui->comboBox->setCurrentIndex(0);
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
                        QString user;
                        QString pass;
                        QString phone;
                        user=ui->lineEdit_3->text();
                        pass=ui->lineEdit_8->text();
                        phone=ui->lineEdit_6->text();
                        q.exec("SELECT username FROM person WHERE username='"+user+"' ");

                        if(!(q.first()))
                        {
                            p.exec("INSERT INTO person VALUES('"+user+"','"+pass+"','"+phone+"',0)");
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
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()=="")
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}


void login::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()=="")
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}


void login::on_lineEdit_5_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()=="")
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}


void login::on_lineEdit_6_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()=="")
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}

void login::on_lineEdit_9_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()=="")
    {
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_4->setStyleSheet("background-color: rgb(183, 194, 255);");
    }
    if(!(ui->lineEdit_3->text()==""||ui->lineEdit_8->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_9->text()==""))
    {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setStyleSheet("background-color: rgb(85, 88, 255);");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void login::on_pushButton_2_clicked()
{
    QSqlQuery q;
    QString U=ui->lineEdit->text();
    QString P=ui->lineEdit_2->text();
      QSqlQuery R;
      QSqlQuery p;
        QSqlQuery z;
    q.exec("SELECT username FROM person WHERE username= '"+U+"'  AND password= '"+P+"' ");

    if(q.first())
    {
        if(ui->checkBox->isChecked()){
        p.exec("UPDATE person SET c='1'  WHERE username= '"+U+"' ");
        z.exec("UPDATE person SET c='0'  WHERE username!='"+U+"' ");
        }
        else
            R.exec("UPDATE person SET c='0'");
        login::close();
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
        ui->pushButton_7->setStyleSheet("image: url(:/new/prefix1/eye2.jpg);");
        ui->lineEdit_8->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->pushButton_7->setStyleSheet("image: url(:/new/prefix1/eye1.jpg);");
        ui->lineEdit_8->setEchoMode(QLineEdit::Normal);
    }
}

void login::on_pushButton_8_clicked()
{
    if(ui->lineEdit_9->echoMode()==QLineEdit::Normal)
    {
        ui->pushButton_8->setStyleSheet("image: url(:/new/prefix1/eye2.jpg);");
        ui->lineEdit_9->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->pushButton_8->setStyleSheet("image: url(:/new/prefix1/eye1.jpg);");
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
}

// the push button 9 belongs to the privacy policy.
void login::on_pushButton_9_clicked()
{
    QMessageBox::information(this, "Privacy Policy", "Terms of Service"
                             "By signing up for Converso, you accept our Privacy Policy and agree not to:"
                             "<ul><br><li>Use our service to send spam or scam users.</li>"
                             "<br><li>Promote violence on publicly viewable Telegram channels, bots, etc.</li>"
                             "<br><li>Post illegal pornographic content on publicly viewable Telegram channels, bots, etc.</li>"
                             "<br><li>We reserve the right to update these Terms of Service later.</li>"
                             "<br><li>Citizens of EU countries and the United Kingdom must be at least 16 years old to sign up.</li></ul>");
}

void login::on_radioButton_clicked()
{

}
