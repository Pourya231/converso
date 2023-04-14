#include "start.h"
#include "ui_start.h"
#include "login.h"
#include "QPropertyAnimation"

start::start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::start)
{
    ui->setupUi(this);
    ui->groupBox_2->hide();
    ui->groupBox_3->hide();
    ui->groupBox_4->hide();
    ui->groupBox_5->hide();
}

start::~start()
{
    delete ui;
}

// the very beggining push button:
// here is the order of push buttons: 6->3 , 3->4 , 4->5 , 5->0
// here is the order of Group boxes: 0 -> 2 -> 3 -> 4 -> 5
void start::on_pushButton_6_clicked()
{

    QPropertyAnimation *animation = new QPropertyAnimation(ui->groupBox_2, "geometry");     /// the group box page that enters.
    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->groupBox, "geometry");  /// the group box page that gets removes.

    animation2->setDuration(500);
    animation2->setStartValue(QRect(100, 0, 511, 641));
    animation2->setEndValue(QRect(860, 0, 511, 641));
    animation2->setEasingCurve(QEasingCurve::InOutQuad);
    animation2->start();

    animation->setDuration(500);
    animation->setStartValue(QRect(-490, 0, 511, 641));
    animation->setEndValue(QRect(10, 0, 511, 641));
    animation->setEasingCurve(QEasingCurve::InOutQuad);
    animation->start();

    ui->groupBox_2->show();
}

void start::on_pushButton_3_clicked()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->groupBox_3, "geometry");     /// the group box page that enters.
    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->groupBox_2, "geometry");  /// the group box page that gets removes.

    animation2->setDuration(500);
    animation2->setStartValue(QRect(100, 0, 511, 641));
    animation2->setEndValue(QRect(860, 0, 511, 641));
    animation2->setEasingCurve(QEasingCurve::InOutQuad);
    animation2->start();

    animation->setDuration(500);
    animation->setStartValue(QRect(-490, 0, 511, 641));
    animation->setEndValue(QRect(10, 0, 511, 641));
    animation->setEasingCurve(QEasingCurve::InOutQuad);
    animation->start();

    ui->groupBox_3->show();
}



void start::on_pushButton_4_clicked()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->groupBox_4, "geometry");     /// the group box page that enters.
    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->groupBox_3, "geometry");  /// the group box page that gets removes.

    animation2->setDuration(500);
    animation2->setStartValue(QRect(10, 0, 511, 641));
    animation2->setEndValue(QRect(860, 0, 511, 641));
    animation2->setEasingCurve(QEasingCurve::InOutQuad);
    animation2->start();

    animation->setDuration(500);
    animation->setStartValue(QRect(-490, 0, 511, 641));
    animation->setEndValue(QRect(10, 0, 511, 641));
    animation->setEasingCurve(QEasingCurve::InOutQuad);
    animation->start();

    ui->groupBox_4->show();
}

void start::on_pushButton_5_clicked()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->groupBox_5, "geometry");     /// the group box page that enters.
    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->groupBox_4, "geometry");  /// the group box page that gets removes.

    animation2->setDuration(500);
    animation2->setStartValue(QRect(100, 0, 511, 641));
    animation2->setEndValue(QRect(860, 0, 511, 641));
    animation2->setEasingCurve(QEasingCurve::InOutQuad);
    animation2->start();

    animation->setDuration(500);
    animation->setStartValue(QRect(-490, 0, 511, 641));
    animation->setEndValue(QRect(10, 0, 511, 641));
    animation->setEasingCurve(QEasingCurve::InOutQuad);
    animation->start();

    ui->groupBox_5->show();
}


void start::on_pushButton_clicked()
{
    login * w1=new login;
    w1->show();
}
