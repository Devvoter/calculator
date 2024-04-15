#include "../include/mainwindow.h"
#include "../include/ui_mainwindow.h"

//#include <QKeyEvent>
//#include <QDesktopServices>
#include <QDebug>
#include <QObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //conecting digit buttons
    connect(ui->bt_0, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_1, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_2, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_3, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_4, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_5, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_6, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_7, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_8, SIGNAL(released()), this, SLOT(bt_digit_pressed()));
    connect(ui->bt_9, SIGNAL(released()), this, SLOT(bt_digit_pressed()));

    //connecting basic operations buttons
    connect(ui->bt_plus, SIGNAL(released()), this, SLOT(bt_basic_op_pressed()));
    connect(ui->bt_minus, SIGNAL(released()), this, SLOT(bt_basic_op_pressed()));
    connect(ui->bt_multiply, SIGNAL(released()), this, SLOT(bt_basic_op_pressed()));
    connect(ui->bt_divide, SIGNAL(released()), this, SLOT(bt_basic_op_pressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//this function is just to test the label output
//to-do: display help
void MainWindow::on_bt_help_released(){
    lb_long_string += "help";
    ui->lb_long->setText(lb_long_string);
    //QDesktopServices::openUrl(QUrl::fromLocalFile("help.html"));
    //qDebug() << "test_help";
}

//add digit to string and display it
void MainWindow::bt_digit_pressed(){
    //if true, clear lb_number for a new input
    if (operation_pressed)
    {
        lb_number_string = "";
        operation_pressed = false;
    }
    QPushButton * button = (QPushButton*)sender();
    //QPushButton* button = qobject_cast<QPushButton*>(sender());
    lb_long_string += button->text();
    ui->lb_long->setText(lb_long_string);
    lb_number_string += button->text();
    ui->lb_number->setText(lb_number_string);
}

void MainWindow::on_bt_point_released(){
    lb_long_string += ".";
    ui->lb_long->setText(lb_long_string);
    lb_number_string += ".";
    ui->lb_number->setText(lb_number_string);
}

void MainWindow::on_bt_inverse_released(){
    
}

void MainWindow::bt_basic_op_pressed(){
    QPushButton * button = (QPushButton*)sender();
    //QPushButton* button = qobject_cast<QPushButton*>(sender());
    lb_long_string += button->text();
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
    //execution of the operation
    evaluate(1);
    operation = button->text();
}
    
void MainWindow::on_bt_modulo_released(){
    lb_long_string += "%";
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
    evaluate(1);
    operation = "%";
}
void MainWindow::on_bt_abs_released(){
    lb_long_string += "abs";
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
}
void MainWindow::on_bt_square_released(){
    lb_long_string += "^2";
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
}
void MainWindow::on_bt_exp_released(){
    lb_long_string += "^n"; //to-do: insert the input exponent
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
}
void MainWindow::on_bt_square_root_released(){
    lb_long_string += "√";
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
}
void MainWindow::on_bt_n_root_released(){
    lb_long_string += "ⁿ√";
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
}
void MainWindow::on_bt_factorial_released(){
    lb_long_string += "!";
    ui->lb_long->setText(lb_long_string);
    operation_pressed = true;
}

void MainWindow::on_bt_equal_released(){
    lb_long_string += "=";
    ui->lb_long->setText(lb_long_string);
}
void MainWindow::on_bt_del_released(){
    if (lb_long_string != ""){
        lb_long_string.chop(1); //removes last character
    }
    if (lb_number_string != ""){
        lb_number_string.chop(1);
    }
}
void MainWindow::on_bt_ac_released(){
    lb_long_string = "";
    lb_number_string = "";
}

void MainWindow::evaluate(bool operation_type){
    //for operations with two operands
    if (operation_type == 1){
        if (operation == ""){
            operand_1 = lb_number_string.toDouble();
            return;
        }
        else{
            operand_2 = lb_number_string.toDouble();
            //basic operations
            // +
            if (operation == "+"){
                result = add(operand_1, operand_2);
            }
            // -
            else if (operation == "-"){
                result = subtract(operand_1, operand_2);
            }
            // *
            else if (operation == "*"){
                result = multiply(operand_1, operand_2);
            }
            // /
            else if (operation == "/"){
                result = divide(operand_1, operand_2);
                if (result == ERROR_DIVIDE_ZERO){
                    on_bt_ac_released();
                    ui->lb_number->setText("Error:");
                    ui->lb_long->setText("divide by zero");
                    return;
                }
            }
            //advanced operations
            else if (operation == "%"){
                //how to handle decimal input??? convert to int, throw an error?                
                result = modulo(operand_1, operand_2);
            }
            

            //write on display
            lb_number_string = QString::number(result);
            ui->lb_number->setText(lb_number_string);
            operand_1 = result;
        }        
    }
    else{
        /* code */
    }
    
}