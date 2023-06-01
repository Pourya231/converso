#include "start.h"
#include "QTcpServer"
#include "QTcpSocket"
#include <QApplication>
#include "login.h"
#include "chose_name.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 login w;
    w.show();
    return a.exec();
}
