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
private slots:
    void on_pushButton_clicked();
    void on_listWidget_currentRowChanged(int currentRow);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    QTcpSocket *socket;
    int first;
    quint16  m_nNextBlockSize;
    Ui::chatroom *ui;
};

#endif // CHATROOM_H
