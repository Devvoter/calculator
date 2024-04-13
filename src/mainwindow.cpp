#include "../include/mainwindow.h"
#include "../include/ui_mainwindow.h"

#include <QKeyEvent>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_help_clicked(){
    QDesktopServices::openUrl(QUrl::fromLocalFile("../calculator/help.html"));
}