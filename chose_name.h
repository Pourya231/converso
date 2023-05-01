#ifndef CHOSE_NAME_H
#define CHOSE_NAME_H

#include <QMainWindow>

namespace Ui {
class chose_name;
}

class chose_name : public QMainWindow
{
    Q_OBJECT

public:
    explicit chose_name(QWidget *parent = nullptr);
    ~chose_name();

private slots:
    void on_PushButton_clicked();
     void openimage();
private:
    Ui::chose_name *ui;
};

#endif // CHOSE_NAME_H
