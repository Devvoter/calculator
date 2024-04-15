#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "main.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //declare variables
    QString lb_long_string = ""; //string that will be displayed at label lb_string
    QString lb_number_string = ""; //string that will be displayed at label lb_number
    bool operation_pressed = false; //true if op button pressed - it will clear out the lb_number label
    double operand_1 = 0; //parameter to math function
    double operand_2 = 0; //parameter to math function
    double result = 0; //return value of math function
    QString operation = ""; //stores pressed operation for evaluation

private slots:
    //displays help in help.html file
    void on_bt_help_released(); //note - on_buttonName_released() is pre-defined function

    //digit buttons merged
    void bt_digit_pressed();

    //point
    void on_bt_point_released();

    //inverse number - upřímně bych to nejradši smazala
    void on_bt_inverse_released();

    //basic operations buttons (+,-,*,/) merged
    void bt_basic_op_pressed();
    
    void on_bt_modulo_released();
    void on_bt_abs_released();
    void on_bt_square_released();
    void on_bt_exp_released();
    void on_bt_square_root_released();
    void on_bt_n_root_released();
    void on_bt_factorial_released();
    
    void on_bt_equal_released();
    void on_bt_del_released();
    void on_bt_ac_released();

    //function that computes and exec the operations
    //operation - string conteaining operation
    //operation_type - 0 stands for one operand operation (square, square root, ...), 1 for two operands operation (+, -, ...)
    void evaluate(bool operation_type);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H