#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include "qtconfigmacros.h"
#include <QMainWindow>

//QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
//QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    //displays help in help.html file
    void on_bt_help_clicked();
};



#endif // MAINWINDOW_H
