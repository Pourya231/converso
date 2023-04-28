#ifndef SETNAME_H
#define SETNAME_H

#include <QMainWindow>

namespace Ui {
class setname;
}

class setname : public QMainWindow
{
    Q_OBJECT

public:
    explicit setname(QWidget *parent = nullptr);
    ~setname();

private:
    Ui::setname *ui;
public slots:
   void openimage();
private slots:
   void on_pushButton_clicked();
};

#endif // SETNAME_H
