/********************************************************************************
** Form generated from reading UI file 'chose_name.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOSE_NAME_H
#define UI_CHOSE_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chose_name
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *PushButton;
    QPushButton *pushButton;

    void setupUi(QMainWindow *chose_name)
    {
        if (chose_name->objectName().isEmpty())
            chose_name->setObjectName(QString::fromUtf8("chose_name"));
        chose_name->resize(1081, 921);
        centralwidget = new QWidget(chose_name);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(-40, -10, 1131, 941));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/IMG_2241.JPG);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(431, 151, 201, 201));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/client.jpeg);\n"
"    border:1px solid black;    \n"
"\n"
"    border-radius:100%;\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(316, 420, 441, 81));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 66, 241);\n"
"\n"
"font: 17pt \"MS Shell Dlg 2\";\n"
"border-radius:40px;\n"
"border: 1px solid black;\n"
"padding-left:30px;\n"
""));
        PushButton = new QPushButton(centralwidget);
        PushButton->setObjectName(QString::fromUtf8("PushButton"));
        PushButton->setGeometry(QRect(400, 640, 271, 101));
        PushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 370, 141, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(108, 66, 234);"));
        chose_name->setCentralWidget(centralwidget);

        retranslateUi(chose_name);

        QMetaObject::connectSlotsByName(chose_name);
    } // setupUi

    void retranslateUi(QMainWindow *chose_name)
    {
        chose_name->setWindowTitle(QApplication::translate("chose_name", "MainWindow", nullptr));
        label->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("chose_name", "name", nullptr));
        PushButton->setText(QApplication::translate("chose_name", "Stact Chat", nullptr));
        pushButton->setText(QApplication::translate("chose_name", "add photo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chose_name: public Ui_chose_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOSE_NAME_H
