#ifndef START_H
#define START_H

#include <QMainWindow>
#include <QObject>
QT_BEGIN_NAMESPACE
namespace Ui { class start; }
QT_END_NAMESPACE





class start : public QMainWindow
{
    Q_OBJECT

public:
    start(QWidget *parent = nullptr);
    ~start();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::start *ui;
};
#endif // START_H
