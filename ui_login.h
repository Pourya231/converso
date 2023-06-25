/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox;
    QLabel *label_5;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_6;
    QLabel *label_10;
    QLineEdit *lineEdit_8;
    QLabel *label_11;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_9;
    QLabel *label_12;
    QPushButton *pushButton_8;
    QPushButton *backlogin;
    QRadioButton *radioButton;
    QPushButton *pushButton_9;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_13;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(983, 824);
        login->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(-30, -60, 1081, 921));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/IMG_2241.JPG);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 50, 341, 861));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(116, 130, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 16pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 203, 271, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"border-radius:18px;\n"
"border: 1px solid #7e7e7e;\n"
"padding-left:10px;"));
        lineEdit_3->setMaxLength(15);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 440, 151, 91));
        label_4->setStyleSheet(QString::fromUtf8("font: 15pt \"MS Shell Dlg 2\";"));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setLineWidth(0);
        label_4->setMidLineWidth(0);
        label_4->setIndent(-1);
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(59, 550, 211, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius:12px;\n"
"border: 1px solid #7e7e7e;\n"
"padding-left:10px;"));
        lineEdit_5->setMaxLength(5);
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(84, 680, 151, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 155, 247);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 365, 141, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"border: 1px solid #000000;"));
        lineEdit_6->setMaxLength(10);
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 365, 91, 31));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        comboBox->setEditable(true);
        comboBox->setMaxCount(11);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 212, 21, 21));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/OIP.jpg);"));
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(130, 365, 31, 31));
        lineEdit_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        lineEdit_7->setMaxLength(5);
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 500, 51, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/re.png);\n"
""));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(54, 20, 231, 81));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/logo2.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(40, 256, 271, 41));
        lineEdit_8->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius:18px;\n"
"border: 1px solid #7e7e7e;\n"
"padding-left:10px;"));
        lineEdit_8->setMaxLength(14);
        lineEdit_8->setEchoMode(QLineEdit::Password);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(11, 266, 21, 21));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/lock.png);"));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(271, 266, 31, 21));
        pushButton_7->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/eye2.jpg);\n"
"border:none;"));
        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(40, 310, 269, 41));
        lineEdit_9->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius:18px;\n"
"border: 1px solid #7e7e7e;\n"
"padding-left:10px;"));
        lineEdit_9->setMaxLength(14);
        lineEdit_9->setEchoMode(QLineEdit::Password);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 320, 21, 21));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/lock.png);"));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(269, 320, 31, 21));
        pushButton_8->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/eye2.jpg);\n"
"border:none;"));
        backlogin = new QPushButton(groupBox_2);
        backlogin->setObjectName(QString::fromUtf8("backlogin"));
        backlogin->setGeometry(QRect(103, 720, 113, 31));
        backlogin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        backlogin->setAutoDefault(true);
        backlogin->setFlat(true);
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 600, 211, 21));
        radioButton->setStyleSheet(QString::fromUtf8("font: 9pt \"MS Shell Dlg 2\";"));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(234, 598, 81, 28));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 9pt \"MS Shell Dlg 2\";\n"
""));
        pushButton_9->setAutoDefault(false);
        pushButton_9->setFlat(true);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(253, 268, 15, 15));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(252, 320, 15, 15));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(283, 213, 14, 21));
        label_13->setStyleSheet(QString::fromUtf8("font: 13pt \"MS Shell Dlg 2\";\n"
"color: rgb(170, 0, 0);\n"
"font: 13pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_8->raise();
        label_3->raise();
        lineEdit_3->raise();
        label_4->raise();
        lineEdit_5->raise();
        pushButton_4->raise();
        lineEdit_6->raise();
        comboBox->raise();
        label_5->raise();
        lineEdit_7->raise();
        pushButton_6->raise();
        label_10->raise();
        label_11->raise();
        pushButton_7->raise();
        lineEdit_9->raise();
        label_12->raise();
        pushButton_8->raise();
        backlogin->raise();
        radioButton->raise();
        pushButton_9->raise();
        label_14->raise();
        label_15->raise();
        label_13->raise();
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, -10, 341, 861));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(115, 180, 111, 51));
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"MS Shell Dlg 2\";\n"
"font: 23pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        label->setFrameShape(QFrame::NoFrame);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 380, 271, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"border-radius:18px;\n"
"border: 1px solid #7e7e7e;\n"
"padding-left:10px;"));
        lineEdit->setMaxLength(15);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 430, 271, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"border-radius:18px;\n"
"border: 1px solid #7e7e7e;;\n"
"padding-left:10px;\n"
""));
        lineEdit_2->setMaxLength(15);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(86, 630, 161, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"font: 75 14pt ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 88, 255);\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 722, 161, 20));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 717, 71, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 255);\n"
"font: 8pt \"MS Shell Dlg 2\";"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 390, 21, 21));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/OIP.jpg);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 440, 21, 21));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/lock.png);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(268, 440, 31, 21));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/eye2.jpg);\n"
"border:none;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(42, 20, 241, 131));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/logo2.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 486, 161, 21));
        label_7->setStyleSheet(QString::fromUtf8("\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
""));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 485, 21, 22));
        checkBox->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2->raise();
        label->raise();
        lineEdit->raise();
        pushButton_2->raise();
        label_2->raise();
        pushButton_3->raise();
        label_8->raise();
        label_9->raise();
        pushButton->raise();
        label_6->raise();
        label_7->raise();
        checkBox->raise();
        login->setCentralWidget(centralwidget);
        graphicsView->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(login);
        QObject::connect(pushButton_3, SIGNAL(clicked()), groupBox_2, SLOT(show()));

        pushButton_9->setDefault(false);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("login", "Sign up", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("login", "<html><head/><body><p>username must not contain special symbol</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("login", "Username", nullptr));
        label_4->setText(QString());
        lineEdit_5->setPlaceholderText(QApplication::translate("login", "Enter the 5-digit code", nullptr));
        pushButton_4->setText(QApplication::translate("login", "Continue", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QApplication::translate("login", "phone number", nullptr));
        comboBox->setItemText(0, QApplication::translate("login", "Iran ", "+98"));
        comboBox->setItemText(1, QApplication::translate("login", "China", nullptr));
        comboBox->setItemText(2, QApplication::translate("login", "USA", nullptr));
        comboBox->setItemText(3, QApplication::translate("login", "Canada", nullptr));
        comboBox->setItemText(4, QApplication::translate("login", "Egypt", nullptr));
        comboBox->setItemText(5, QApplication::translate("login", "Germany", nullptr));
        comboBox->setItemText(6, QApplication::translate("login", "India", nullptr));
        comboBox->setItemText(7, QApplication::translate("login", "Iraq", nullptr));
        comboBox->setItemText(8, QApplication::translate("login", "Japen", nullptr));
        comboBox->setItemText(9, QApplication::translate("login", "spain", nullptr));
        comboBox->setItemText(10, QApplication::translate("login", "Turkey", nullptr));

        label_5->setText(QString());
        lineEdit_7->setText(QApplication::translate("login", "+98", nullptr));
        pushButton_6->setText(QString());
        label_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit_8->setToolTip(QApplication::translate("login", "<html><head/><body><p>username must contain special symbol</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_8->setPlaceholderText(QApplication::translate("login", "Password", nullptr));
        label_11->setText(QString());
        pushButton_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit_9->setToolTip(QApplication::translate("login", "<html><head/><body><p>username must contain special symbol</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_9->setPlaceholderText(QApplication::translate("login", "Repeat Password", nullptr));
        label_12->setText(QString());
        pushButton_8->setText(QString());
        backlogin->setText(QApplication::translate("login", "back to login", nullptr));
        radioButton->setText(QApplication::translate("login", "I agree privacy policy terms.", nullptr));
        pushButton_9->setText(QApplication::translate("login", "learn more", nullptr));
        label_14->setText(QApplication::translate("login", "\342\200\242", nullptr));
        label_15->setText(QApplication::translate("login", "\342\200\242", nullptr));
        label_13->setText(QApplication::translate("login", "\342\200\242", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("login", "Login", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("login", "Username", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("login", "Password", nullptr));
        pushButton_2->setText(QApplication::translate("login", "Login", nullptr));
        label_2->setText(QApplication::translate("login", " Don't have an account?", nullptr));
        pushButton_3->setText(QApplication::translate("login", "Clik here!", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        pushButton->setText(QString());
        label_6->setText(QString());
        label_7->setText(QApplication::translate("login", "remember my account", nullptr));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
