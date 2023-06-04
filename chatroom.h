#ifndef CHATROOM_H
#define CHATROOM_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QListWidgetItem>
#include <styledialog.h>
#include <QStyle>
//#include "userlist.h"

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
      void setSelectedLabel(QListWidgetItem *current, QListWidgetItem *previous);
      void checkSelectedItem();
      void updateButtonVisibility();

private slots:
    void on_pushButton_clicked();
    void on_listWidget_currentRowChanged(int currentRow);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_actionlight_triggered();

    void on_actiondark_triggered();



    void on_pushButton_3_clicked();


    void on_actionAboutUs_triggered();

    void on_pushButton_13_clicked();

    void on_listWidget_2_currentRowChanged(int currentRow);
     void openimage();
     void on_pushButton_14_clicked();
<<<<<<< HEAD
      void onStyleChanged(QFont &font, QColor &color);
=======

>>>>>>> 5be3078a61c583135b3b46fb6e91492fd6fbb731
private:

    QTcpSocket *socket;
    int first;
    quint16  m_nNextBlockSize;
    Ui::chatroom *ui;
       QString line;
         StyleDialog dlg;


};

#endif // CHATROOM_H
