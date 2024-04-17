#include "../include/mainwindow.h"
#include "../include/ui_mainwindow.h"

//#include <QKeyEvent>
//#include <QDesktopServices>
//#include <QDebug>
#include <QObject>
#include <cctype>

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
}

//add digit to string and display it
void MainWindow::bt_digit_pressed(){
    //if true, clear lb_number for a new input
    if (operation_pressed){
        lb_number_string = "";
        operation_pressed = false;
    }
    QPushButton * button = (QPushButton*)sender();
    lb_long_string += button->text();
    ui->lb_long->setText(lb_long_string);
    lb_number_string += button->text();
    ui->lb_number->setText(lb_number_string);
}

void MainWindow::on_bt_point_released(){
    if (check_errors(".")){
        return;
    }    
    lb_long_string += ".";
    ui->lb_long->setText(lb_long_string);
    lb_number_string += ".";
    ui->lb_number->setText(lb_number_string);
}

void MainWindow::on_bt_inverse_released(){
    if (!operation_pressed){ //if the last presseddn button was number - invert, otherwise do nothing
        if (negative){        
            lb_long_string.remove(lb_long_string.length() - lb_number_string.length() - 2, 2); //cuts the last occurrence of "(-"
            lb_long_string.chop(1); //cuts the last character, ")"
            lb_number_string.remove('-'); //cuts the negative sign of the number
            negative = false;   
        }
        else{
            lb_long_string.insert(lb_long_string.length() - lb_number_string.length(), "(-"); //insert "(-" before number
            lb_long_string.append(')'); //apeend ")" at the end of the string
            lb_number_string = "-" + lb_number_string; //adds "-" in front of the number
            negative = true;
        }
        ui->lb_long->setText(lb_long_string);
        ui->lb_number->setText(lb_number_string);
    } 
}

void MainWindow::bt_basic_op_pressed(){
    operation_pressed = true;    
    QPushButton * button = (QPushButton*)sender();
    if (check_errors(button->text())){
        return;
    }
    lb_long_string += button->text();
    ui->lb_long->setText(lb_long_string); 
    operation = button->text();   
    //execution of the operation
    evaluate(1);
}
    
void MainWindow::on_bt_modulo_released(){
    operation_pressed = true;
    if (check_errors("%")){
        return;
    }
    lb_long_string += "%";
    ui->lb_long->setText(lb_long_string);
    operation = "%";
    evaluate(1);
}
void MainWindow::on_bt_abs_released(){
    operation_pressed = true;
    if (check_errors("abs")){
        return;
    }
    lb_long_string += "abs";
    ui->lb_long->setText(lb_long_string);
    operation = "abs";
}
void MainWindow::on_bt_square_released(){
    operation_pressed = true;
    if (check_errors("^2")){
        return;
    }
    lb_long_string += "^2";
    ui->lb_long->setText(lb_long_string); 
    operation = "^2";   
    evaluate(0);
}
void MainWindow::on_bt_exp_released(){
    operation_pressed = true;
    if (check_errors("^")){
        return;
    }
    lb_long_string += "^"; 
    ui->lb_long->setText(lb_long_string);
    operation = "^n";
    evaluate(1);
}
void MainWindow::on_bt_square_root_released(){
    operation_pressed = true;
    if (check_errors("√")){
        return;
    }
    lb_long_string += "√";
    ui->lb_long->setText(lb_long_string);
    operation = "√";
    evaluate(0);
}
void MainWindow::on_bt_n_root_released(){
    operation_pressed = true;
    if (check_errors("ⁿ√")){
        return;
    }
    lb_long_string += "ⁿ√"; //to-do: insert the input root
    ui->lb_long->setText(lb_long_string);
    operation = "ⁿ√";
    evaluate(1);
}
void MainWindow::on_bt_factorial_released(){
    operation_pressed = true;
    if (check_errors("!")){
        return;
    }
    lb_long_string += "!";
    ui->lb_long->setText(lb_long_string);
    operation = "!";
    evaluate(0);
}

void MainWindow::on_bt_equal_released(){
    if (check_errors("=")){
        return;
    }
    lb_long_string += "=";
    ui->lb_long->setText(lb_long_string);
    evaluate(1);
    lb_long_string += QString::number(result);
    ui->lb_long->setText(lb_long_string);
    lb_long_string = "";
    lb_number_string = "";
    operation_pressed = false;
    operand_1 = 0; 
    operand_2 = 0; 
    result = 0; 
    operation = ""; 
    negative = false;
}
void MainWindow::on_bt_del_released(){
    if (lb_long_string != ""){
        lb_long_string.chop(1); //removes last character
        ui->lb_long->setText(lb_long_string);
    }
    if (lb_number_string != ""){
        lb_number_string.chop(1);
        ui->lb_number->setText(lb_number_string);
    }
}
void MainWindow::on_bt_ac_released(){
    lb_long_string = "";
    ui->lb_long->setText(lb_long_string);
    lb_number_string = "";
    ui->lb_number->setText(lb_number_string);    
    operation_pressed = false;
    operand_1 = 0; 
    operand_2 = 0; 
    result = 0; 
    operation = ""; 
    negative = false;
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
                //display error
                if (result == ERROR_DIVIDE_ZERO){
                    on_bt_ac_released();
                    ui->lb_number->setText("Error:");
                    ui->lb_long->setText("divide by zero");
                    return;
                }
            }
            //advanced operations
            // %
            else if (operation == "%"){
                //how to handle decimal input??? convert to int, throw an error?                
                result = modulo(operand_1, operand_2);
            }
            // ^n
            else if (operation == "^n"){
                result = exponent(operand_1, operand_2);
                //display error                
                if (result == ERROR_VALUE){
                    on_bt_ac_released();
                    ui->lb_number->setText("Error:");
                    ui->lb_long->setText("exponent must be natural value (n>=0), 0^0 is undefined");
                    return;
                }                
            } 
            // n root
            else if (operation == "ⁿ√"){
                result = root(operand_1, operand_2);
                //display error                
                if (result == ERROR_VALUE && (int)operand_2 % 2 == 0){ //if the root is even and the number is negative
                    on_bt_ac_released();
                    ui->lb_number->setText("Error:");
                    ui->lb_long->setText("root must be positive integer (n>0), number must be >= 0");
                    return;
                }
                else if (result == ERROR_VALUE && (int)operand_2 % 2 != 0){
                    on_bt_ac_released();
                    ui->lb_number->setText("Error:");
                    ui->lb_long->setText("root must be positive integer (n>0)");
                    return;
                }                
            }           
        }        
    }
    else{
        //advanced operations
        operand_1 = lb_number_string.toDouble();
        // |x|
        // x^2
        if (operation == "^2"){
            result = exponent(operand_1, 2);
        }
        // √
        else if (operation == "√"){
            result = root(operand_1, 2);
            if (result == ERROR_VALUE){
                on_bt_ac_released();
                ui->lb_number->setText("Error:");
                ui->lb_long->setText("number must be greater than 0");
                return;
            }
        }
        else if (operation == "!"){
            result = factorial(operand_1);
            if (result == ERROR_VALUE){
                on_bt_ac_released();
                ui->lb_number->setText("Error:");
                ui->lb_long->setText("number must be positive integer (n>0)");
                return;
            }
        }
    }
    //write on display
    lb_number_string = QString::number(result);
    ui->lb_number->setText(lb_number_string);
    operand_1 = result;
}

bool MainWindow::check_errors(QString bt_check){
    //number starts with "."
    if (bt_check == "." && operation_pressed){
        ui->lb_long->setText("check_point_start");
        return true;
    }
    //two dots
    if (bt_check == "." && lb_number_string.last(1) == '.'){
        ui->lb_long->setText("check_two_point");
        return true;
    }
    //number ends with ".", dot after dot
    if ((operation_pressed || bt_check == "=") && lb_long_string.last(1) == '.'){
        ui->lb_long->setText("check_point_end");
        operation_pressed = false;
        return true;
    }
    //expresion cant start with an operation
    if (lb_long_string == ""){
        ui->lb_long->setText("check_op_start");
        return true;
    }
    //expresion cant end with an operation
    if (bt_check == "=" && (lb_long_string.last(1) == "+" || lb_long_string.last(1) == "-" || lb_long_string.last(1) == "*" || lb_long_string.last(1) == "/" || lb_long_string.last(1) == "%" || lb_long_string.last(2) == "^n" || lb_long_string.last(2) == "ⁿ√")){ 
        ui->lb_long->setText("check_op_end");
        return true;
    }
    //operations cant be entered after two operand operations operation
    if (!isdigit(lb_long_string[lb_long_string.length() - 1].toLatin1()) && (lb_long_string.last(1) == "+" || lb_long_string.last(1) == "-" || lb_long_string.last(1) == "*" || lb_long_string.last(1) == "/" || lb_long_string.last(1) == "%" || lb_long_string.last(2) == "^n" || lb_long_string.last(2) == "ⁿ√")){
        ui->lb_long->setText("check_two_op");
        return true;
    }    
    return false;
}
