#include "start.h"
#include "ui_start.h"
#include "login.h"
#include "QPropertyAnimation"
#include "QMovie"
#include "QTimer"
#include <QDebug>
#include <QObject>

start::start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::start)
{
    ui->setupUi(this);
    ui->groupBox_2->hide();
    ui->groupBox_3->hide();
    ui->groupBox_4->hide();
    ui->groupBox_5->hide();



    QPropertyAnimation *animation = new QPropertyAnimation(ui->label_5, "geometry");
    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->label_7, "geometry");

    animation->setDuration(1000);
    animation->setStartValue(QRect(-490, 140, 511, 641));
    animation->setEndValue(QRect(66, 140, 351, 271));
    animation->setEasingCurve(QEasingCurve::InOutQuad);
    animation->start();
  animation2->setStartValue(QRect());
    animation2->setDuration(1000);
    animation2->setStartValue(QRect(430, 0, 361, 161));
   animation2->setEndValue(QRect(66, 11, 361, 161));
   animation2->setEasingCurve(QEasingCurve::InOutQuad);
   animation2->start();
    /// the group box page that enters.
    QTimer *timer = new QTimer (this);
      timer->setInterval(1500);

      QObject::connect(timer, &QTimer::timeout, [=]()
       {
          QMovie *movie= new QMovie ("C:/Users/user/Desktop/project/converso-main/Loading.gif");
          ui->label_6->setMovie(movie);
          movie->start();
          ui->label_6->show();
      });

       timer->start();

    QTimer *Timer= new QTimer() ;

    Timer->setInterval(5000);

   QObject::connect(Timer, &QTimer::timeout, [=]()
    {

        ui->groupBox_6->hide();
        QPropertyAnimation *animation = new QPropertyAnimation(ui->groupBox, "geometry");     /// the group box page that enters.
        QPropertyAnimation *animation2 = new QPropertyAnimation(ui->groupBox_6, "geometry");  /// the group box page that gets removes.

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

        ui->groupBox->show();
        Timer->stop();

    });

     Timer->start();
    // */


    /*animation->setDuration(500);
    animation->setStartValue(QRect(0, 0, 0, 0));
    animation->setEndValue(QRect(10, 0, 511, 641));
    animation->setEasingCurve(QEasingCurve::InOutQuad);


    animation->start();
    ui->groupBox->hide();*/

    //timer->start();

    //loop.exec();
    //timer->start(10000);







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

/// after the timer is getting ready , this function below has to be deleted.

