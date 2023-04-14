#include "code.h"
#include "login.h"
#include "ui_code.h"
#include "QMessageBox"
#include "QIntValidator"

int adad;
code::code(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::code)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator);
    ui->lineEdit_2->setValidator(new QIntValidator);
    ui->lineEdit_3->setValidator(new QIntValidator);
    ui->lineEdit_4->setValidator(new QIntValidator);
    adad=rand()%8000+1000;
    ui->label->setText(QString::number(adad));
}

code::~code()
{
    delete ui;
}

void code::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==adad/1000+48&&ui->lineEdit_2->text()==(adad%1000)/100+48&&ui->lineEdit_3->text()==(adad%100)/10+48&&ui->lineEdit_4->text()==(adad%10+48))
    {
         code::close();
         login * W=new login;
         W->show();
         QMessageBox::information(this,"notic","Your account has been successfully created");

    }
    else if(ui->lineEdit->text()!="" &&  ui->lineEdit_2->text()!=""&&ui->lineEdit_3->text()!=""&&ui->lineEdit_4->text()!="")
    {
         QMessageBox::warning(this,"notic"," not good");
    }
}


void code::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==adad/1000+48&&ui->lineEdit_2->text()==(adad%1000)/100+48&&ui->lineEdit_3->text()==(adad%100)/10+48&&ui->lineEdit_4->text()==(adad%10+48))
    {
        code::close();
        login * W=new login;
        W->show();
        QMessageBox::information(this,"notic","Your account has been successfully created");
    }
    else if(ui->lineEdit->text()!="" &&  ui->lineEdit_2->text()!=""&&ui->lineEdit_3->text()!=""&&ui->lineEdit_4->text()!="")
    {
        QMessageBox::warning(this,"notic"," not good");
    }
}


void code::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==adad/1000+48&&ui->lineEdit_2->text()==(adad%1000)/100+48&&ui->lineEdit_3->text()==(adad%100)/10+48&&ui->lineEdit_4->text()==(adad%10+48))
    {
        code::close();
        login * W=new login;
        W->show();
        QMessageBox::information(this,"notic","Your account has been successfully created");
    }
    else if(ui->lineEdit->text()!="" &&  ui->lineEdit_2->text()!=""&&ui->lineEdit_3->text()!=""&&ui->lineEdit_4->text()!="")
    {
        QMessageBox::warning(this,"notic"," not good");
    }

}


void code::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()==adad/1000+48&&ui->lineEdit_2->text()==(adad%1000)/100+48&&ui->lineEdit_3->text()==(adad%100)/10+48&&ui->lineEdit_4->text()==(adad%10+48))
    {
        code::close();
        login * W=new login;
        W->show();
        QMessageBox::information(this,"notic","Your account has been successfully created");
    }
    else if(ui->lineEdit->text()!="" &&  ui->lineEdit_2->text()!=""&&ui->lineEdit_3->text()!=""&&ui->lineEdit_4->text()!="")
    {
        QMessageBox::warning(this,"notic"," not good");
    }
}

