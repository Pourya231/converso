#include "setname.h"
#include "ui_setname.h"
#include "QFileDialog"
#include "QHBoxLayout"
#include "QBitmap"
#include "QPainter"
setname::setname(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setname)
{
    ui->setupUi(this);
    connect(ui->PushButton,SIGNAL(clicked()),this,SLOT(openimage()));
      ui->PushButton->setStyleSheet("QPushButton { border: none; }");
     ui->PushButton->setStyleSheet("QPushButton {border:none;background-color: rgb(108, 66, 234);;  font: 11pt;}");
}

setname::~setname()
{
    delete ui;
}
void setname::openimage(){
    QStringList filters;
    QString filename =QFileDialog::getOpenFileName(this,tr("Open Image"),".",filters.join(";;"));
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
