#include "../include/main.h"
#include "../include/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(310, 660);
    w.show();
    return a.exec();
}
