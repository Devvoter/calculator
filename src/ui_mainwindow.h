/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *bt_equal;
    QFrame *fr_numbers;
    QPushButton *bt_4;
    QPushButton *bt_5;
    QPushButton *bt_6;
    QPushButton *bt_7;
    QPushButton *bt_8;
    QPushButton *bt_9;
    QPushButton *bt_point;
    QPushButton *bt_inverse;
    QPushButton *bt_0;
    QPushButton *bt_1;
    QPushButton *bt_2;
    QPushButton *bt_3;
    QFrame *fr_advanced_operations;
    QPushButton *bt_factorial;
    QPushButton *bt_square;
    QPushButton *bt_exp;
    QPushButton *bt_square_root;
    QPushButton *bt_n_root;
    QPushButton *bt_factorial_6;
    QPushButton *bt_factorial_7;
    QPushButton *bt_factorial_8;
    QPushButton *bt_factorial_9;
    QPushButton *bt_factorial_10;
    QPushButton *bt_factorial_11;
    QPushButton *bt_factorial_12;
    QPushButton *bt_factorial_13;
    QPushButton *bt_del;
    QPushButton *bt_ac;
    QLabel *lb_long;
    QLabel *lb_number;
    QPushButton *bt_help;
    QPushButton *bt_divide;
    QPushButton *bt_multiply;
    QPushButton *bt_minus;
    QPushButton *bt_plus;
    QPushButton *bt_abs;
    QPushButton *bt_modulo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(380, 660);
        MainWindow->setMinimumSize(QSize(380, 660));
        MainWindow->setMaximumSize(QSize(380, 660));
        QIcon icon;
        icon.addFile(QString::fromUtf8("calculator.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(23, 19, 30);\n"
"}\n"
"QPushButton{\n"
"	border-radius: 15px;\n"
"	font: 700 18pt \"Segoe UI\";\n"
"}\n"
"/*******************************************************************/\n"
"QPushButton#bt_divide, QPushButton#bt_multiply, QPushButton#bt_plus, QPushButton#bt_minus{\n"
"	background-color: rgb(213, 236, 245);\n"
"	color: rgb(33, 135, 161);\n"
"}\n"
"QPushButton#bt_equal{	\n"
"	background-color: rgb(33, 135, 161);\n"
"	color: rgb(213, 236, 245);\n"
"}\n"
"QPushButton#bt_equal:hover, QPushButton#bt_divide:hover, QPushButton#bt_multiply:hover, QPushButton#bt_plus:hover, QPushButton#bt_minus:hover{	\n"
"	background-color: rgb(36, 30, 47);\n"
"	border: 1px solid rgb(33, 135, 161);\n"
"}\n"
"/*******************************************************************/\n"
"QFrame#fr_numbers QPushButton{\n"
"	background-color: rgb(36, 30, 47);\n"
"	color: rgb(213, 236, 245);\n"
"}\n"
"QFrame#fr_numbers QPushButton:hover{\n"
"	border: 1px solid rgb(33, 135, 161);\n"
"}\n"
"/**********"
                        "*********************************************************/\n"
"QFrame#fr_advanced_operations QPushButton{\n"
"	background-color: rgb(36, 30, 47);\n"
"	color: rgb(33, 135, 161);\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}\n"
"QPushButton#bt_modulo, QPushButton#bt_abs{\n"
"	background-color: rgb(36, 30, 47);\n"
"	color: rgb(33, 135, 161);\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}\n"
"QFrame#fr_advanced_operations QPushButton:hover, QPushButton#bt_modulo:hover, QPushButton#bt_abs:hover{\n"
"	border: 1px solid rgb(33, 135, 161);\n"
"}\n"
"QFrame#fr_advanced_operations QPushButton#bt_del, QFrame#fr_advanced_operations QPushButton#bt_ac{\n"
"	background-color: rgb(33, 135, 161);\n"
"	color: rgb(213, 236, 245);\n"
"}\n"
"QFrame#fr_advanced_operations QPushButton#bt_del:hover, QFrame#fr_advanced_operations QPushButton#bt_ac:hover{\n"
"	background-color: rgb(36, 30, 47);\n"
"	border: 1px solid rgb(33, 135, 161);\n"
"}\n"
"/*******************************************************************/\n"
"QLabel{\n"
"	color: rgb(213, 2"
                        "36, 245);\n"
"	border-bottom-width: 1px;\n"
"	border-bottom-style: solid;\n"
"	border-radius: 0px;\n"
"	border-bottom-color: rgb(33, 135, 161);\n"
"}\n"
"/*******************************************************************/\n"
"QLabel#lb_expression{\n"
"	font: 14pt \"Segoe UI\";\n"
"}\n"
"/*******************************************************************/\n"
"QLabel#lb_number{\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"/*******************************************************************/\n"
"QPushButton#bt_help{\n"
"	background-color: rgb(33, 135, 161);\n"
"	color: rgb(213, 236, 245);\n"
"	font: 700 9pt \"Segoe UI\";\n"
"}\n"
"QPushButton#bt_help:hover{	\n"
"	background-color: rgb(36, 30, 47);\n"
"	color: rgb(213, 236, 245);\n"
"	border: 1px solid rgb(33, 135, 161);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        bt_equal = new QPushButton(centralwidget);
        bt_equal->setObjectName("bt_equal");
        bt_equal->setGeometry(QRect(300, 510, 60, 130));
        bt_equal->setMouseTracking(true);
        bt_equal->setAcceptDrops(false);
        bt_equal->setAutoFillBackground(false);
        bt_equal->setStyleSheet(QString::fromUtf8(""));
        bt_equal->setAutoDefault(false);
        bt_equal->setFlat(false);
        fr_numbers = new QFrame(centralwidget);
        fr_numbers->setObjectName("fr_numbers");
        fr_numbers->setGeometry(QRect(20, 370, 200, 270));
        fr_numbers->setFrameShape(QFrame::StyledPanel);
        fr_numbers->setFrameShadow(QFrame::Raised);
        bt_4 = new QPushButton(fr_numbers);
        bt_4->setObjectName("bt_4");
        bt_4->setGeometry(QRect(0, 70, 60, 60));
        bt_5 = new QPushButton(fr_numbers);
        bt_5->setObjectName("bt_5");
        bt_5->setGeometry(QRect(70, 70, 60, 60));
        bt_6 = new QPushButton(fr_numbers);
        bt_6->setObjectName("bt_6");
        bt_6->setGeometry(QRect(140, 70, 60, 60));
        bt_7 = new QPushButton(fr_numbers);
        bt_7->setObjectName("bt_7");
        bt_7->setGeometry(QRect(0, 0, 60, 60));
        bt_8 = new QPushButton(fr_numbers);
        bt_8->setObjectName("bt_8");
        bt_8->setGeometry(QRect(70, 0, 60, 60));
        bt_9 = new QPushButton(fr_numbers);
        bt_9->setObjectName("bt_9");
        bt_9->setGeometry(QRect(140, 0, 60, 60));
        bt_point = new QPushButton(fr_numbers);
        bt_point->setObjectName("bt_point");
        bt_point->setGeometry(QRect(140, 210, 60, 60));
        bt_inverse = new QPushButton(fr_numbers);
        bt_inverse->setObjectName("bt_inverse");
        bt_inverse->setGeometry(QRect(70, 210, 60, 60));
        bt_0 = new QPushButton(fr_numbers);
        bt_0->setObjectName("bt_0");
        bt_0->setGeometry(QRect(0, 210, 60, 60));
        bt_1 = new QPushButton(fr_numbers);
        bt_1->setObjectName("bt_1");
        bt_1->setGeometry(QRect(0, 140, 60, 60));
        bt_2 = new QPushButton(fr_numbers);
        bt_2->setObjectName("bt_2");
        bt_2->setGeometry(QRect(70, 140, 60, 60));
        bt_3 = new QPushButton(fr_numbers);
        bt_3->setObjectName("bt_3");
        bt_3->setGeometry(QRect(140, 140, 60, 60));
        fr_advanced_operations = new QFrame(centralwidget);
        fr_advanced_operations->setObjectName("fr_advanced_operations");
        fr_advanced_operations->setGeometry(QRect(20, 160, 340, 211));
        fr_advanced_operations->setAutoFillBackground(false);
        fr_advanced_operations->setFrameShape(QFrame::StyledPanel);
        fr_advanced_operations->setFrameShadow(QFrame::Raised);
        bt_factorial = new QPushButton(fr_advanced_operations);
        bt_factorial->setObjectName("bt_factorial");
        bt_factorial->setGeometry(QRect(280, 140, 60, 60));
        bt_square = new QPushButton(fr_advanced_operations);
        bt_square->setObjectName("bt_square");
        bt_square->setGeometry(QRect(0, 140, 60, 60));
        bt_exp = new QPushButton(fr_advanced_operations);
        bt_exp->setObjectName("bt_exp");
        bt_exp->setGeometry(QRect(70, 140, 60, 60));
        bt_square_root = new QPushButton(fr_advanced_operations);
        bt_square_root->setObjectName("bt_square_root");
        bt_square_root->setGeometry(QRect(140, 140, 60, 60));
        bt_n_root = new QPushButton(fr_advanced_operations);
        bt_n_root->setObjectName("bt_n_root");
        bt_n_root->setGeometry(QRect(210, 140, 60, 60));
        bt_factorial_6 = new QPushButton(fr_advanced_operations);
        bt_factorial_6->setObjectName("bt_factorial_6");
        bt_factorial_6->setGeometry(QRect(140, 0, 60, 60));
        bt_factorial_7 = new QPushButton(fr_advanced_operations);
        bt_factorial_7->setObjectName("bt_factorial_7");
        bt_factorial_7->setGeometry(QRect(70, 70, 60, 60));
        bt_factorial_8 = new QPushButton(fr_advanced_operations);
        bt_factorial_8->setObjectName("bt_factorial_8");
        bt_factorial_8->setGeometry(QRect(0, 70, 60, 60));
        bt_factorial_9 = new QPushButton(fr_advanced_operations);
        bt_factorial_9->setObjectName("bt_factorial_9");
        bt_factorial_9->setGeometry(QRect(140, 70, 60, 60));
        bt_factorial_10 = new QPushButton(fr_advanced_operations);
        bt_factorial_10->setObjectName("bt_factorial_10");
        bt_factorial_10->setGeometry(QRect(0, 0, 60, 60));
        bt_factorial_11 = new QPushButton(fr_advanced_operations);
        bt_factorial_11->setObjectName("bt_factorial_11");
        bt_factorial_11->setGeometry(QRect(70, 0, 60, 60));
        bt_factorial_12 = new QPushButton(fr_advanced_operations);
        bt_factorial_12->setObjectName("bt_factorial_12");
        bt_factorial_12->setGeometry(QRect(210, 70, 60, 60));
        bt_factorial_13 = new QPushButton(fr_advanced_operations);
        bt_factorial_13->setObjectName("bt_factorial_13");
        bt_factorial_13->setGeometry(QRect(280, 70, 60, 60));
        bt_del = new QPushButton(fr_advanced_operations);
        bt_del->setObjectName("bt_del");
        bt_del->setGeometry(QRect(210, 0, 60, 60));
        bt_ac = new QPushButton(fr_advanced_operations);
        bt_ac->setObjectName("bt_ac");
        bt_ac->setGeometry(QRect(280, 0, 60, 60));
        lb_long = new QLabel(centralwidget);
        lb_long->setObjectName("lb_long");
        lb_long->setGeometry(QRect(20, 110, 340, 40));
        lb_long->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_number = new QLabel(centralwidget);
        lb_number->setObjectName("lb_number");
        lb_number->setGeometry(QRect(210, 50, 150, 60));
        lb_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bt_help = new QPushButton(centralwidget);
        bt_help->setObjectName("bt_help");
        bt_help->setGeometry(QRect(330, 10, 30, 30));
        bt_help->setMouseTracking(true);
        bt_help->setAcceptDrops(false);
        bt_help->setStyleSheet(QString::fromUtf8(""));
        bt_help->setAutoDefault(false);
        bt_help->setFlat(false);
        bt_divide = new QPushButton(centralwidget);
        bt_divide->setObjectName("bt_divide");
        bt_divide->setGeometry(QRect(300, 440, 60, 60));
        bt_multiply = new QPushButton(centralwidget);
        bt_multiply->setObjectName("bt_multiply");
        bt_multiply->setGeometry(QRect(230, 440, 60, 60));
        bt_minus = new QPushButton(centralwidget);
        bt_minus->setObjectName("bt_minus");
        bt_minus->setGeometry(QRect(230, 510, 60, 60));
        bt_plus = new QPushButton(centralwidget);
        bt_plus->setObjectName("bt_plus");
        bt_plus->setGeometry(QRect(230, 580, 60, 60));
        bt_abs = new QPushButton(centralwidget);
        bt_abs->setObjectName("bt_abs");
        bt_abs->setGeometry(QRect(300, 370, 60, 60));
        bt_modulo = new QPushButton(centralwidget);
        bt_modulo->setObjectName("bt_modulo");
        bt_modulo->setGeometry(QRect(230, 370, 60, 60));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        bt_equal->setDefault(false);
        bt_help->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        bt_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        bt_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        bt_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        bt_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        bt_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        bt_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        bt_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        bt_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        bt_inverse->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        bt_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bt_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        bt_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        bt_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        bt_factorial->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        bt_square->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        bt_exp->setText(QCoreApplication::translate("MainWindow", "x\342\201\277", nullptr));
        bt_square_root->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        bt_n_root->setText(QCoreApplication::translate("MainWindow", "\342\201\277\342\210\232x", nullptr));
        bt_factorial_6->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_factorial_7->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_factorial_8->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_factorial_9->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_factorial_10->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_factorial_11->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_factorial_12->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_factorial_13->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_del->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        bt_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        lb_long->setText(QCoreApplication::translate("MainWindow", "1+2+", nullptr));
        lb_number->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        bt_help->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        bt_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        bt_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        bt_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bt_abs->setText(QCoreApplication::translate("MainWindow", "|x|", nullptr));
        bt_modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
