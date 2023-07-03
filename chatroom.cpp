#include "chatroom.h"
#include "ui_chatroom.h"
#include <QByteArray>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "QFile"
#include "QTextStream"
#include "QDate"
#include "QTime"
#include "QMessageBox"
#include "QFileDialog"
#include <QStyle>
#include "QFile"
#include "QTextStream"
#include "QGraphicsPixmapItem"
#include "QPainter"
#include "QBitmap"
#include "QGraphicsScene"
#include "QGraphicsView"

int num=-1;
chatroom::chatroom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chatroom)
   , m_nNextBlockSize(0)
{
    ui->setupUi(this);
    ui->pushButton_13->setEnabled(false);
    ///ui->lineEdit_2->setReadOnly(true);
     connect(ui->pushButton_12,SIGNAL(clicked()),this,SLOT(openimage()));
    socket = new QTcpSocket(this);
    socket->connectToHost("192.168.43.204", 4563);
       // ui->->setReadOnly(true);
     //   ui->groupBox_2->setEnabled(false);
     ui->pushButton->hide();
     QSqlDatabase db;
     db=QSqlDatabase::addDatabase("QSQLITE");

  //  db.setDatabaseName("C:\\Users\\user\\Desktop\\project\\converso-main\\1.db");
     db.setDatabaseName("C:/Users/pourya/desktop/1.db");



    db.open();
   //  QFile file1("C:\\Users\\user\\Desktop\\project\\converso-main\\user.txt");
    QFile file1("C:/Users/pourya/desktop/user.txt");


     if(!file1.open(QIODevice::ReadWrite | QIODevice::Text))
     {
       exit(11);
     }

     QTextStream out(&file1);

     line=out.readLine();
     ///ui->lineEdit_2->setText(line);
 //  QString filepath;

     QString sendmesage;

     ///sendmesage=ui->lineEdit_2->text();

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

    ui->actionlight->setChecked(1);
    ui->actionlight->setDisabled(1);
    ui->groupBox_4->hide();

    connect(ui->lineEdit,&QLineEdit::returnPressed,this,&chatroom::handleEnter);
    connect(ui->lineEdit_3,&QLineEdit::returnPressed,this,&chatroom::handleEnter_2);

    ui->pushButton_4->setStyleSheet("font: 75 17pt ; border-radius: 5pt;");
    ui->pushButton_5->setStyleSheet("font: 75 17pt ; border-radius: 5px;");
    ui->pushButton_6->setStyleSheet("font: 75 17pt ; border-radius: 5px;");
    ui->pushButton_7->setStyleSheet("font: 75 17pt ; border-radius: 5px;");
    ui->pushButton_8->setStyleSheet("font: 75 17pt ; border-radius: 5px;");
    ui->pushButton_9->setStyleSheet("font: 75 17pt ; border-radius: 5px;");
    ui->pushButton_10->setStyleSheet("font: 75 17pt ; border-radius: 5px;");
    ui->pushButton_11->setStyleSheet("font: 75 17pt ; border-radius: 5px;");
    connect(ui->pushButton_4,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("👍");});
    connect(ui->pushButton_5,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("👎");});
    connect(ui->pushButton_6,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("😱");});
    connect(ui->pushButton_7,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("😡");});
    connect(ui->pushButton_8,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("😐");});
    connect(ui->pushButton_9,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("🙂");});
    connect(ui->pushButton_10,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("🤣");});
    connect(ui->pushButton_11,&QPushButton::clicked,this,[this](){ui->lineEdit->insert("😂");});

    ui->listWidget_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground_light.png);"
                                    "font: 18pt ""MS Shell Dlg 2"";"
                                    "color: rgb(0, 0, 0);"
                                    "background-attachment:fixed;");

    connect(ui->listWidget, &QListWidget::currentItemChanged, this, &chatroom::setSelectedLabel);
    ui->pushButton_14->hide();

    connect(ui->actionstyle, SIGNAL(triggered(bool)),
            &dlg, SLOT(open()));



    connect(&dlg, SIGNAL(styleChanged(QFont&,QColor&)),
            this, SLOT(onStyleChanged(QFont&,QColor&)));

    /////////////////////////////// this part updates the contacts.
    QSqlQuery C;
    C.exec("SELECT contact FROM contacts WHERE client='"+line+"'");
    QSqlQueryModel cont;
    cont.setQuery(C);
    for(int i=0;i<cont.rowCount();i++)
    {
        num++;
        QString s=cont.data(cont.index(i,0)).toString();
        if (s==line)
            ui->listWidget->addItem("saved message");
        else
            ui->listWidget->addItem(s);


       // ui->listWidget->item(num)->setIcon(QIcon("D:/project2/converso/image_profile/"+s+".png"));
        //ui->listWidget->item(num)->setIcon(QIcon("C:/Users/user/Desktop/project/converso-main/image_profile/"+s+".png"));

      // QIcon icon("C:/Users/user/Desktop/project/converso-main/image_profile/"+s+".png");
       QIcon icon("D:/project2/converso/image_profile/"+s+".png");

        //just for the beuty:
        const int desired_size = 40;
        QPixmap pixmap(desired_size, desired_size);
        pixmap.fill(Qt::gray);
        QPainter painter(&pixmap);
        QSize icon_size = icon.actualSize(QSize(desired_size, desired_size));
        int x = (desired_size - icon_size.width()) / 2;
        int y = (desired_size - icon_size.height()) / 2;
        painter.drawPixmap(x, y, icon.pixmap(icon_size));
        //

        ui->listWidget->item(num)->setIcon(QIcon(pixmap));

    }
    ////////////////////////////////////////////////////////////////

    /// more option for chat setting signals are here.
    ui->groupBox_6->hide();
    ui->label_2->hide();

    connect(ui->listWidget_2, &QListWidget::itemClicked, this, &chatroom::checkSelectedItem);
    connect(ui->listWidget_2, &QListWidget::itemSelectionChanged, this, &chatroom::updateButtonVisibility);
    /*connect(ui->groupBox_6, &QListWidget::itemClicked, this, &chatroom::checkSelectedItem);
    connect(ui->groupBox_6, &QGroupBox:: this, &chatroom::updateButtonVisibility);*/

    ui->label_3->setText(line);


}


int GBS=0; /// flag for emoji status. group box status
int GBS_2=0; /// flag for moreOptions for chat setting status.
int LS=1;

chatroom::~chatroom()
{
    socket->close();
    removeEventFilter(this);
    delete ui;
}

/// the number of items in listwidget.

int doub=0;
int NUM=0;
void chatroom::openimage()
{
     QString filename =QFileDialog::getOpenFileName(this,tr("Open Image"),".",("File (  *.png *.jpg *.jpeg)"));
     if(!filename.isEmpty())
     {

           QImage image(filename);
           image=image.scaled(300,300);
           ui->listWidget_2->addItem("");
           ui->listWidget_2->item(NUM)->setIcon(QIcon(filename));

           NUM++;
     }

}


void chatroom::newConnection()
{
    QString clientIsD;
    QString recvmessage = "";
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_4_5);
    for (;;)
    {
        if (!m_nNextBlockSize)
        {
            if (socket->bytesAvailable() < sizeof(quint16))
            {
                break;
            }
            in >> m_nNextBlockSize;
        }

        if (socket->bytesAvailable() < m_nNextBlockSize)
        {
            break;
        }
        QString str;
        in >> str;

        recvmessage += str;
        m_nNextBlockSize = 0;
    }

    if(doub>1)
    {
        clientIsD=ui->listWidget->currentItem()->text();
        recvmessage=recvmessage.mid(recvmessage.indexOf(':')+1,recvmessage.length());
        ui->listWidget_2->addItem(recvmessage);
        ui->listWidget_2->item(NUM)->setIcon(QIcon("D:/project2/converso/image_profile/ali.png"));
       // ui->listWidget_2->item(NUM)->setIcon(QIcon("C:/Users/user/Desktop/project/converso-main/image_profile/ali.png"));
        NUM++;
     }
     doub++;
}

void chatroom::on_pushButton_clicked() /// belongs to the chat
{
    //���������� �����
   // ui->lineEdit->setFont(font);
//    QPalette palatte;
 //   palatte.setColor(QPalette::WindowText,Qt::red);
  // ui->lineEdit->setPalette(palatte);

    QDate tarikh=QDate::currentDate();
    QTime time=QTime::currentTime();
    int day=tarikh.day();
    int month=tarikh.month();
    int year=tarikh.year();
    int hour=time.hour();
    int minute=time.minute();
    int second=time.second();
    QSqlQuery s;
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
    ui->listWidget_2->addItem(line+" : "+sendmesage.mid(sendmesage.indexOf(":")+1,sendmesage.length())); // îòîáðàæàåì ñòðîêó â plainTextEdit

    ui->listWidget_2->item(NUM)->setIcon(QIcon("D:/project2/converso/image_profile/"+line+".png"));
  //  ui->listWidget_2->item(NUM)->setIcon(QIcon("C:/Users/user/Desktop/project/converso-main/image_profile/"+line+".png"));

    ui->listWidget_2->item(NUM)->setIcon(QIcon("D:/project2/converso/image_profile/"+line+".png"));
   // ui->listWidget_2->item(NUM)->setIcon(QIcon("C:/Users/user/Desktop/project/converso-main/image_profile/"+line+".png"));

    NUM++;
    sendmesage=line+" : "+sendmesage.mid(sendmesage.indexOf(":")+1,sendmesage.length());
    QString girande=ui->listWidget->currentItem()->text();
    s.exec("INSERT INTO message  VALUES('"+line+"','"+girande+"','"+sendmesage+"',"+QString::number(second)+","+QString::number(minute)+","+QString::number(hour)+","+QString::number(day)+","+QString::number(month)+","+QString::number(year)+")");

    ui->lineEdit->setText("");


}

void chatroom::handleEnter()
{
    if (ui->lineEdit->text()!="")  /// prevents spam.
        chatroom::on_pushButton_clicked();
}

void chatroom::on_pushButton_2_clicked()  /// belonges to the Id search
{
   bool check=false;
    QSqlQuery p;
    QString ID;
    ID=ui->lineEdit_3->text();
    p.exec("SELECT username FROM person WHERE username='"+ID+"' ");
    ui->lineEdit_3->setText("");
    if (p.first())
    {
         for(int i=0 ; i<ui->listWidget->count() ; i++)  ///checks if the Id already exist or not.
         {
             if(ui->listWidget->item(i)->text()==ID)
             {
                 check=true;
                 break;
             }
         }
         if(!check)
         {
             QSqlQuery g;
         num++;
         ui->listWidget->addItem(ID);

         ui->listWidget->item(num)->setIcon(QIcon("C:/Users/pourya/Desktop/client.jpeg"));
        // ui->listWidget->item(num)->setIcon(QIcon("C:C:\\Users\\user\\Desktop\\project\\converso-main\\client.jpeg"));

        ui->listWidget->item(num)->setIcon(QIcon("C:/Users/pourya/Desktop/client.jpeg"));
        //ui->listWidget->item(num)->setIcon(QIcon("C:C:\\Users\\user\\Desktop\\project\\converso-main\\client.jpeg"));

         ui->groupBox_2->setEnabled(true);
         g.exec("INSERT INTO contacts VALUES('"+line+"','"+ID+"') ");
         }
    }

}
void chatroom::handleEnter_2() /// this is related to pushButton 2
{
    if (ui->lineEdit_3->text()!="") /// prevents spam.
        chatroom::on_pushButton_2_clicked();
}



void chatroom::on_listWidget_currentRowChanged(int currentRow)
{
  ui->listWidget_2->blockSignals(true);
    NUM=0;
 ui->listWidget_2->clear();
   ui->listWidget_2->blockSignals(false);
  QSqlQuery p;

   p.exec("SELECT * FROM message WHERE (sender='"+line+"' and recipient='"+ui->listWidget->currentItem()->text()+"') or (sender='"+ui->listWidget->currentItem()->text()+"' and recipient='"+line+"' ) ORDER BY (second+minute*60+hour*3600+day*86400+month*2592000+year*31104000)");



  QSqlQueryModel m;
  m.setQuery(p);

 for(int i=0;i<m.rowCount();i++)
 {

    QString pic;
     QString s=m.data(m.index(i,2)).toString();
     ui->listWidget_2->addItem(s);
      pic=m.data(m.index(i,0)).toString();

      //ui->listWidget_2->item(NUM)->setIcon(QIcon("D:/project2/converso/image_profile/"+pic+".png"));
      //ui->listWidget_2->item(NUM)->setIcon(QIcon("C:/Users/user/Desktop/project/converso-main/image_profile/"+pic+".png"));

    //  QIcon icon("C:/Users/user/Desktop/project/converso-main/image_profile/"+pic+".png");
      QIcon icon("D:/project2/converso/image_profile/"+pic+".png");

      const int desired_size = 60;
      QPixmap pixmap(desired_size, desired_size);
      pixmap.fill(Qt::gray);
      QPainter painter(&pixmap);
      QSize icon_size = icon.actualSize(QSize(desired_size, desired_size));
      int x = (desired_size - icon_size.width()) / 2;
      int y = (desired_size - icon_size.height()) / 2;
      painter.drawPixmap(x, y, icon.pixmap(icon_size));
      ui->listWidget_2->item(NUM)->setIcon(QIcon(pixmap));

        NUM++;

 }

}


void chatroom::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->lineEdit->text()=="")
        ui->pushButton->hide();
    else
        ui->pushButton->show();

}


void chatroom::on_actionlight_triggered()
{
    ui->actionlight->setDisabled(1);
    ui->actiondark->setEnabled(1);
    ui->actionlight->setChecked(1);
    ui->actiondark->setChecked(0);
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->groupBox_2->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->groupBox_3->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->groupBox_4->setStyleSheet("background-color: rgb(255, 255, 255);");
    //ui->lineEdit_3->setStyleSheet("QLineEdith { color: rgb(0,0,0); } QLineEdith::placeholder { color: rgb(0,0,0); } ""font: 11pt ""MS Shell Dlg 2");
    //ui->lineEdit->setStyleSheet("QLineEdith { color: rgb(0,0,0); } QLineEdith::placeholder { color: rgb(0,0,0); } ""font: 11pt ""MS Shell Dlg 2");
    ui->lineEdit_3->setStyleSheet("color: rgb(0,0,0); ""font: 11pt ""MS Shell Dlg 2");
    ui->lineEdit->setStyleSheet("color: rgb(0,0,0); ""font: 15pt ""MS Shell Dlg 2");
    ui->pushButton->setStyleSheet("border-image: url(:/new/prefix1/send.png);");
    ui->pushButton_3->setStyleSheet("border-image: url(:/new/prefix1/Emoji.png);");
    ui->pushButton_12->setStyleSheet("border-image: url(:/new/prefix1/attachment_light.png);");
    ui->listWidget_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground_light.png);"
                                    "font: 18pt ""MS Shell Dlg 2"";"
                                    "color: rgb(0, 0, 0);"
                                    "background-attachment:fixed;");
    ui->label_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground_light.png);"
                               "font: 18pt ""MS Shell Dlg 2"";"
                               "color: rgb(0, 0, 0);"
                               "background-attachment:fixed;");
    ui->listWidget->setStyleSheet("font: 18pt ""MS Shell Dlg 2"";background-color: rgb(255,255,255);color: rgb(0,0,0);");
    ui->label->setStyleSheet("background-color: rgb(255,255,255); color: rgb(0, 0, 0); ""font: 13pt ""MS Shell Dlg 2 ");
    ui->pushButton_14->setStyleSheet("border-image: url(:/new/prefix1/more_options.png);");
    ui->pushButton_13->setStyleSheet("color: rgb(0,0,0);");
    ui->pushButton_16->setStyleSheet("color: rgb(0,0,0);");
    ui->pushButton_15->setStyleSheet("color: rgb(0,0,0);");
    ui->label_3->setStyleSheet("font: 18pt ""MS Shell Dlg 2""; color: rgb(0,0,0);");


}


void chatroom::on_actiondark_triggered()
{
    ui->actiondark->setDisabled(1);
    ui->actionlight->setEnabled(1);
    ui->actiondark->setChecked(1);
    ui->actionlight->setChecked(0);
    ui->groupBox->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->groupBox_2->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->groupBox_3->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->groupBox_4->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->lineEdit_3->setStyleSheet("color: rgb(255, 255, 255); ""font: 11pt ""MS Shell Dlg 2");
    ui->lineEdit->setStyleSheet("color: rgb(255, 255, 255); ""font: 15pt ""MS Shell Dlg 2");
    ui->pushButton->setStyleSheet("border-image: url(:/new/prefix1/send2.png);");
    ui->pushButton_3->setStyleSheet("border-image: url(:/new/prefix1/Emoji_Dark.png);");
    ui->pushButton_12->setStyleSheet("border-image: url(:/new/prefix1/attacment_dark.png);");
    ui->listWidget_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground.jpg);"
                                    "font: 18pt ""MS Shell Dlg 2"";"
                                    "color: rgb(255, 255, 255);"
                                    "background-attachment:fixed;");
    ui->label_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground.jpg);"
                               "font: 18pt ""MS Shell Dlg 2"";"
                               "color: rgb(255, 255, 255);"
                               "background-attachment:fixed;");

    ui->listWidget->setStyleSheet("font: 18pt ""MS Shell Dlg 2"";background-color: rgb(0, 0, 0);color: rgb(255, 255, 255);");
    ui->label->setStyleSheet("background-color: rgb(0, 0, 0); color: rgb(255,255,255); ""font: 13pt ""MS Shell Dlg 2 ");
    ui->pushButton_14->setStyleSheet("border-image: url(:/new/prefix1/more_options_dark.png);");
    ui->pushButton_13->setStyleSheet("color: rgb(255,255,255);");
    ui->pushButton_16->setStyleSheet("color: rgb(255,255,255);");
    ui->pushButton_15->setStyleSheet("color: rgb(255,255,255);");
    ui->label_3->setStyleSheet("font: 18pt ""MS Shell Dlg 2"";color: rgb(255,255,255);");

}

void chatroom::on_pushButton_3_clicked()
{
    if (GBS==0)
    {
        ui->groupBox_4->show();
        GBS=1;
    }
    else
    {
        ui->groupBox_4->hide();
        GBS=0;
    }

}

void chatroom::on_actionAboutUs_triggered()
{
     QMessageBox::information(this, "Converso messenger", "Made with honor by <br> <b> AmirHossein Afshar <br> Pourya Alvani</b>"
                                                          "<br> Warning:<br> This computer program is protected by copyright"
                                                      " laws and international treaties."
                                                      "<br> Unauthorized reproduction or distribution of this program, "
                                                      "or any portion of it, may result in severe civil and criminal penalties,"
                                                      " and will be prosecuted to the maximum extent possible under law.");
}


void chatroom::on_pushButton_13_clicked()
{
    QSqlQuery p;
        p.exec("DELETE FROM message WHERE sender='"+line+"' and recipient='"+ui->listWidget->currentItem()->text()+"' and mess='"+ui->listWidget_2->currentItem()->text()+"' ");
        ui->listWidget_2->takeItem(ui->listWidget_2->currentRow());
        ui->pushButton_12->setEnabled(false);
      // qDebug()<< ui->listWidget->currentRow();

        NUM--;
}


void chatroom::on_listWidget_2_currentRowChanged(int currentRow)
{

   QString mess=ui->listWidget_2->currentItem()->text();
    if(mess.mid(0,mess.indexOf(":")-1)==ui->listWidget->currentItem()->text()){
    ui->pushButton_13->setEnabled(false);
   }
   else
        ui->pushButton_13->setEnabled(true);


}



void chatroom::setSelectedLabel(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (current != nullptr)
    {
        ui->label->setText(current->text());
    }
}


void chatroom::on_pushButton_14_clicked()
{
    if (GBS_2==0)
    {
        GBS_2=1;
        ui->groupBox_6->show();
    }
    else
    {
        GBS_2=0;
        ui->groupBox_6->hide();
    }
}

void chatroom::checkSelectedItem()

{
    bool anyItemSelected = !ui->listWidget_2->selectedItems().isEmpty();
    ui->pushButton_14->setVisible(anyItemSelected);
    ui->groupBox_6->setVisible(anyItemSelected);
}

void chatroom::updateButtonVisibility()
{
    bool anyItemSelected = !ui->listWidget_2->selectedItems().isEmpty();
    ui->pushButton_14->setVisible(anyItemSelected);
    ui->groupBox_6->setVisible(anyItemSelected);
}

QFont f;
QColor c;
void chatroom::onStyleChanged(QFont &font, QColor &color)
{
    ui->lineEdit->setFont(font);
    ui->label_2->setFont(font);

        QPalette palatte;

        if (ui->actiondark->isChecked())
        {
            ui->listWidget_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground.jpg);"
                                            "background-attachment:fixed;"+QString("color:%1").arg(color.name()));
            ui->label_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground.jpg);"
                                       "background-attachment:fixed;"+QString("color:%1").arg(color.name()));
        }
        else
        {
            ui->listWidget_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground_light.png);"
                                            "background-attachment:fixed;"+QString("color:%1").arg(color.name()));
            ui->label_2->setStyleSheet("background-image: url(:/new/prefix1/chatbackground_light.png);"
                                       "background-attachment:fixed;"+QString("color:%1").arg(color.name()));
        }

        ui->lineEdit->setStyleSheet(QString("color:%1").arg(color.name()));
        ui->listWidget_2->setFont(font);
}
void chatroom::on_actionbackground_triggered()
{

    QString filename =QFileDialog::getOpenFileName(this,tr("Open Image"),".",("File (  *.png *.jpg *.jpeg)"));
    if(!filename.isEmpty())
    {
        QImage image(filename);
        ui->listWidget_2->setFont(f);

        ui->listWidget_2->setStyleSheet(QString("color:%1").arg(c.name())+";border-image: url('"+filename+"');");

        NUM++;
    }
}

void chatroom::on_pushButton_16_clicked()
{
    if (LS==1)
    {
        LS=0;
        ui->label_2->show();
        ui->label_2->setText(ui->listWidget_2->currentItem()->text());
    }
    else
    {
        LS=1;
        ui->label_2->hide();
    }
}

void chatroom::on_actiongroup_triggered()
{

}

