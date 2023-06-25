/********************************************************************************
** Form generated from reading UI file 'chatroom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATROOM_H
#define UI_CHATROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatroom
{
public:
    QAction *actioncontact_us;
    QAction *actionAboutUs;
    QAction *actionlight;
    QAction *actiondark;
    QAction *actionstyle;
    QAction *actionbackground;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_5;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget_2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menusetting;
    QMenu *menudark_light_mood;
    QMenu *menuabout;

    void setupUi(QMainWindow *chatroom)
    {
        if (chatroom->objectName().isEmpty())
            chatroom->setObjectName(QString::fromUtf8("chatroom"));
        chatroom->resize(1211, 729);
        chatroom->setStyleSheet(QString::fromUtf8(""));
        actioncontact_us = new QAction(chatroom);
        actioncontact_us->setObjectName(QString::fromUtf8("actioncontact_us"));
        actionAboutUs = new QAction(chatroom);
        actionAboutUs->setObjectName(QString::fromUtf8("actionAboutUs"));
        actionlight = new QAction(chatroom);
        actionlight->setObjectName(QString::fromUtf8("actionlight"));
        actionlight->setCheckable(true);
        actiondark = new QAction(chatroom);
        actiondark->setObjectName(QString::fromUtf8("actiondark"));
        actiondark->setCheckable(true);
        actionstyle = new QAction(chatroom);
        actionstyle->setObjectName(QString::fromUtf8("actionstyle"));
        actionbackground = new QAction(chatroom);
        actionbackground->setObjectName(QString::fromUtf8("actionbackground"));
        centralwidget = new QWidget(chatroom);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(321, 681));
        groupBox->setMaximumSize(QSize(400, 16777215));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 460, 113, 22));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(191, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lineEdit_3, 0, 0, 1, 1);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(301, 611));
        listWidget->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        listWidget->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(listWidget, 1, 0, 1, 2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(861, 681));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(841, 41));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 2, 191, 36));
        label->setMinimumSize(QSize(191, 35));
        label->setMaximumSize(QSize(191, 36));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(groupBox_5, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(841, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/chatbackground_light.png);\n"
"\n"
"font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        listWidget_2 = new QListWidget(groupBox_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy);
        listWidget_2->setMinimumSize(QSize(841, 400));
        listWidget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/chatbackground_light.png);\n"
"\n"
"font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(listWidget_2, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(groupBox_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(841, 40));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButton_13 = new QPushButton(groupBox_6);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setStyleSheet(QString::fromUtf8("font: 8 pt \"MS Shell Dlg 2\";\n"
"\n"
""));

        gridLayout_6->addWidget(pushButton_13, 0, 0, 1, 1);

        pushButton_15 = new QPushButton(groupBox_6);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setStyleSheet(QString::fromUtf8("font: 8 pt \"MS Shell Dlg 2\";\n"
"\n"
""));

        gridLayout_6->addWidget(pushButton_15, 0, 1, 1, 1);

        pushButton_16 = new QPushButton(groupBox_6);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));

        gridLayout_6->addWidget(pushButton_16, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_6, 3, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(841, 52));
        groupBox_4->setMaximumSize(QSize(10000, 10000));
        groupBox_4->setLayoutDirection(Qt::RightToLeft);
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_11 = new QPushButton(groupBox_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(93, 27));
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setFlat(false);

        gridLayout_4->addWidget(pushButton_11, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(93, 27));
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_10, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(groupBox_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(93, 27));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(93, 27));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_8, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(groupBox_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(93, 27));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_7, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(groupBox_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(93, 27));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_6, 0, 5, 1, 1);

        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(93, 27));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_5, 0, 6, 1, 1);

        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(93, 27));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_4, 0, 7, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 4, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(841, 71));
        groupBox_3->setMaximumSize(QSize(16777215, 75));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_14 = new QPushButton(groupBox_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(30, 30));
        pushButton_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_14->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/more_options.png);"));

        gridLayout_2->addWidget(pushButton_14, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(500, 50));
        lineEdit->setSizeIncrement(QSize(0, 0));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(31, 31));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Emoji.png);"));
        pushButton_3->setFlat(false);

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_12 = new QPushButton(groupBox_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(32, 31));
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/attachment_light.png);"));

        gridLayout_2->addWidget(pushButton_12, 0, 3, 1, 1);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(20, 30));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/send.png);\n"
""));

        gridLayout_2->addWidget(pushButton, 0, 4, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 5, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        chatroom->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(chatroom);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1211, 26));
        menusetting = new QMenu(menuBar);
        menusetting->setObjectName(QString::fromUtf8("menusetting"));
        menudark_light_mood = new QMenu(menusetting);
        menudark_light_mood->setObjectName(QString::fromUtf8("menudark_light_mood"));
        menuabout = new QMenu(menuBar);
        menuabout->setObjectName(QString::fromUtf8("menuabout"));
        chatroom->setMenuBar(menuBar);

        menuBar->addAction(menusetting->menuAction());
        menuBar->addAction(menuabout->menuAction());
        menusetting->addAction(menudark_light_mood->menuAction());
        menusetting->addAction(actionstyle);
        menusetting->addAction(actionbackground);
        menudark_light_mood->addAction(actionlight);
        menudark_light_mood->addAction(actiondark);
        menudark_light_mood->addSeparator();
        menuabout->addAction(actioncontact_us);
        menuabout->addAction(actionAboutUs);

        retranslateUi(chatroom);

        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(chatroom);
    } // setupUi

    void retranslateUi(QMainWindow *chatroom)
    {
        chatroom->setWindowTitle(QApplication::translate("chatroom", "MainWindow", nullptr));
        actioncontact_us->setText(QApplication::translate("chatroom", "contact us", nullptr));
        actionAboutUs->setText(QApplication::translate("chatroom", "about us", nullptr));
        actionlight->setText(QApplication::translate("chatroom", "light", nullptr));
        actiondark->setText(QApplication::translate("chatroom", "dark", nullptr));
        actionstyle->setText(QApplication::translate("chatroom", "style", nullptr));
        actionbackground->setText(QApplication::translate("chatroom", "background", nullptr));
        groupBox->setTitle(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("chatroom", "sreach ID", nullptr));
        pushButton_2->setText(QApplication::translate("chatroom", "connect", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_5->setTitle(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("chatroom", "pined message:", nullptr));
        groupBox_6->setTitle(QString());
        pushButton_13->setText(QApplication::translate("chatroom", "delete message", nullptr));
        pushButton_15->setText(QApplication::translate("chatroom", "edith message", nullptr));
        pushButton_16->setText(QApplication::translate("chatroom", "pin message", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_11->setText(QApplication::translate("chatroom", "\360\237\230\202", nullptr));
        pushButton_10->setText(QApplication::translate("chatroom", "\360\237\244\243", nullptr));
        pushButton_9->setText(QApplication::translate("chatroom", "\360\237\231\202", nullptr));
        pushButton_8->setText(QApplication::translate("chatroom", "\360\237\230\220", nullptr));
        pushButton_7->setText(QApplication::translate("chatroom", "\360\237\230\241", nullptr));
        pushButton_6->setText(QApplication::translate("chatroom", "\360\237\230\261", nullptr));
        pushButton_5->setText(QApplication::translate("chatroom", "\360\237\221\216", nullptr));
        pushButton_4->setText(QApplication::translate("chatroom", "\360\237\221\215", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_14->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("chatroom", "chat here ...", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit->setText(QString());
        pushButton_3->setText(QString());
        pushButton_12->setText(QString());
        pushButton->setText(QString());
        menusetting->setTitle(QApplication::translate("chatroom", "setting", nullptr));
        menudark_light_mood->setTitle(QApplication::translate("chatroom", "dark/light mood", nullptr));
        menuabout->setTitle(QApplication::translate("chatroom", "help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatroom: public Ui_chatroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOM_H
