/**
 * @file mainwindow.h
 * @authors Denys Pylypenko, Adam Veselý, Eliška Křeménková, Jaroslava Comová
 * 
 * @brief Header file for mainwindow.cpp
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define ONE_OPERAND_TYPE 0  /**< argument for function that takes one operand */
#define TWO_OPERAND_TYPE 1  /**< argument for function that takes two operands */
#define RESET_VALUES lb_long_string = ""; lb_number_string = ""; operation_pressed = false; operand_1 = 0; operand_2 = 0; result = 0; operation = ""; negative = false; /**< reset all variables */

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
    /**
     * @brief constructor for class MainWindow
     * @param QWidget*parent pointer to parent window
    */
    MainWindow(QWidget *parent = nullptr); 

    /**
     * @brief destructor for class MainWindow
    */
    ~MainWindow(); 

    QString lb_long_string = ""; /**< string that will be displayed at label lb_string */
    QString lb_number_string = ""; /**< string that will be displayed at label lb_number */
    bool operation_pressed = false; /**< true if operation button pressed - it will clear out the lb_number label */
    double operand_1 = 0; /**< parameter for math function */
    double operand_2 = 0; /**< parameter for math function */
    double result = 0; /**< return value of math function */
    double store_result = 0; /**< store result of expression for function Ans */
    QString operation = ""; /**< stores pressed operation for evaluation */
    bool negative = false; /**< sets if the given number is negative or positive */
    QString bt_check = ""; /**< stores pressed operation for error check */

private slots:
    /**
     * @brief opens help file help.html
    */    
    void on_bt_help_released(); 

    /**
     * @brief prints pressed digit
    */
    void bt_digit_pressed();

    /**
     * @brief prints pressed point
    */
    void on_bt_point_released();

    /**
     * @brief changes sign of the number
    */
    void on_bt_sign_released();

    /**
     * @brief inverts the number
    */
    void on_bt_inverse_released();

    /**
     * @brief operation addition
    */
    void on_bt_plus_released();
    /**
     * @brief operation subtraction
    */
    void on_bt_minus_released();
    /**
     * @brief operation multiplication
    */
    void on_bt_multiply_released();
    /**
     * @brief operation division
    */
    void on_bt_divide_released();
    
    /**
     * @brief operation modulo
    */
    void on_bt_modulo_released();
    /**
     * @brief operation absolute value
    */
    void on_bt_abs_released();
    /**
     * @brief operation square
    */
    void on_bt_square_released();
    /**
     * @brief operation exponent
    */
    void on_bt_exp_released();
    /**
     * @brief operation square root
    */
    void on_bt_square_root_released();
    /**
     * @brief operation root
    */
    void on_bt_n_root_released();
    /**
     * @brief operation factorial
    */
    void on_bt_factorial_released();
    
    /**
     * @brief equal pressed, stores and prints the result
    */
    void on_bt_equal_released();
    /**
     * @brief prints stored result of a previous expression
    */
    void on_bt_ans_released(); 
    /**
     * @brief clears display and all variables
    */
    void on_bt_ac_released();

    /**
     * @brief computes and execute the operations
     * 
     * @param[in] operation_type number of arguments operation, that will be evaluated takes
    */
    void evaluate(bool operation_type);
    
    /**
     * @brief handles input errors, if error was detected, writes error message on display
     * 
     * @param[in] bt_text input text to be checked
     * @return true - error detected, false - no error
    */
    bool check_errors(QString bt_text);

    /**
     * @brief writes number on display
     * 
     * @param[in] number digit to be written
    */
    void write_number_on_display(QString number);

    /**
     * @brief defines behavior of pressed keys
    */
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

/*** End of file mainwindow.h ***/