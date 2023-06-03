#ifndef CHATROOM_H
#define CHATROOM_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QString>
namespace Ui {
class chatroom;
}

class chatroom : public QMainWindow
{
    Q_OBJECT

public:
    explicit chatroom(QWidget *parent = nullptr);
    ~chatroom();

public slots:
    void newConnection();
      void on_pushButton_2_clicked();
      void handleEnter();
      void handleEnter_2();

private slots:
    void on_pushButton_clicked();
    void on_listWidget_currentRowChanged(int currentRow);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_actionlight_triggered();

    void on_actiondark_triggered();



    void on_pushButton_3_clicked();

<<<<<<< HEAD
    void on_pushButton_12_clicked();

    void on_listWidget_2_currentRowChanged(int currentRow);
=======

    void on_actionAboutUs_triggered();
>>>>>>> 02495248ed686a8be2efb1182b453968402f8ede

private:
    QTcpSocket *socket;
    int first;
    quint16  m_nNextBlockSize;
    Ui::chatroom *ui;
       QString line;
};

#endif // CHATROOM_H
