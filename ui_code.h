/********************************************************************************
** Form generated from reading UI file 'code.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODE_H
#define UI_CODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_code
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QMainWindow *code)
    {
        if (code->objectName().isEmpty())
            code->setObjectName(QString::fromUtf8("code"));
        code->resize(800, 600);
        centralwidget = new QWidget(code);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 190, 521, 321));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 220, 51, 71));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 40pt \"MS Shell Dlg 2\";"));
        lineEdit->setMaxLength(1);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 220, 51, 71));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 40pt \"MS Shell Dlg 2\";"));
        lineEdit_2->setMaxLength(1);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 220, 51, 71));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 40pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_3->setMaxLength(1);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(340, 220, 51, 71));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 40pt \"MS Shell Dlg 2\";"));
        lineEdit_4->setMaxLength(1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 150, 421, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 120, 80, 25));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 85, 127);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(-50, -30, 871, 641));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/IMG_2241.JPG);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 251, 251));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(0, 0, 0);\n"
"font: 29pt \"MS Shell Dlg 2\";"));
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(1);
        label->setMidLineWidth(0);
        code->setCentralWidget(centralwidget);
        graphicsView->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(code);

        QMetaObject::connectSlotsByName(code);
    } // setupUi

    void retranslateUi(QMainWindow *code)
    {
        code->setWindowTitle(QApplication::translate("code", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        lineEdit->setText(QString());
        label_2->setText(QApplication::translate("code", "please scan the qrcode to get code for confirm account", nullptr));
        pushButton->setText(QApplication::translate("code", "get qrcode", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class code: public Ui_code {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODE_H
