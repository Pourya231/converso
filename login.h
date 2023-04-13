#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "captcha.h"
#include <QPaintEvent>

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
public slots:
    QString captcha(int n);
    int check_user(QString str);
private slots:


    void on_pushButton_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_activated(int index);

    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_6_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_lineEdit_5_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_8_clicked();

    void on_lineEdit_9_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::login *ui;
protected:
    virtual void paintEvent(QPaintEvent *);
};

#endif // LOGIN_H
