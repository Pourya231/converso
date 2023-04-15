#ifndef CODE_H
#define CODE_H

#include <QMainWindow>

namespace Ui {
class code;
}

class code : public QMainWindow
{
    Q_OBJECT

public:
    explicit code(QWidget *parent = nullptr);
    ~code();

private slots:
    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_clicked();

private:
    Ui::code *ui;
};

#endif // CODE_H
