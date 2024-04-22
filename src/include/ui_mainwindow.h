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
    QLabel *lb_long;
    QLabel *lb_number;
    QPushButton *bt_help;
    QPushButton *bt_divide;
    QPushButton *bt_multiply;
    QPushButton *bt_minus;
    QPushButton *bt_plus;
    QPushButton *bt_abs;
    QPushButton *bt_modulo;
    QPushButton *bt_0;
    QPushButton *bt_sign;    
    QPushButton *bt_point;
    QPushButton *bt_1;
    QPushButton *bt_2;
    QPushButton *bt_3;
    QPushButton *bt_4;
    QPushButton *bt_5;
    QPushButton *bt_6;
    QPushButton *bt_7;
    QPushButton *bt_8;
    QPushButton *bt_9;
    QPushButton *bt_factorial;
    QPushButton *bt_square;
    QPushButton *bt_exp;
    QPushButton *bt_square_root;
    QPushButton *bt_n_root;
    QPushButton *bt_inverse;    
    QPushButton *bt_ac;
    QPushButton *bt_ans;
    QPushButton *bt_00;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(310, 660);
        MainWindow->setMinimumSize(QSize(310, 660));
        MainWindow->setMaximumSize(QSize(310, 660));
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
"/***************************************************basic ops***************************************************/\n"
"#bt_divide, #bt_multiply, #bt_plus, #bt_minus{\n"
"	background-color: rgb(213, 236, 245);\n"
"	color: rgb(33, 135, 161);\n"
"}\n"
"#bt_equal{	\n"
"	background-color: rgb(33, 135, 161);\n"
"	color: rgb(213, 236, 245);\n"
"}\n"
"#bt_equal:hover, #bt_divide:hover, #bt_multiply:hover, #bt_plus:hover, #bt_minus:hover{	\n"
"	background-color: rgb(36, 30, 47);\n"
"	border: 1px solid rgb(33, 135, 161);\n"
"}\n"
"/***************************************************ac***************************************************/\n"
"#bt_ac{\n"
"	background-color: rgb(33, 135, 161);\n"
"	color: rgb(213, 236, 245);\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}\n"
"#bt_ac:hover{\n"
"	background-color: rgb(36, 30, 47);\n"
"	border: 1px solid rgb(33, 1"
                        "35, 161);\n"
"}\n"
"/***************************************************numbers***************************************************/\n"
"#bt_0, #bt_00, #bt_1, #bt_2, #bt_3, #bt_4, #bt_5, #bt_6, #bt_7, #bt_8, #bt_9, #bt_point{\n"
"	background-color: rgb(36, 30, 47);\n"
"	color: rgb(213, 236, 245);\n"
"}\n"
"#bt_0:hover, #bt_00:hover, #bt_1:hover, #bt_2:hover, #bt_3:hover, #bt_4:hover, #bt_5:hover, #bt_6:hover, #bt_7:hover, #bt_8:hover, #bt_9:hover, #bt_point:hover{\n"
"	border: 1px solid rgb(33, 135, 161);\n"
"}\n"
"/***************************************************advanced ops***************************************************/\n"
"#bt_modulo, #bt_abs, #bt_exp, #bt_factorial, #bt_square_root, #bt_n_root, #bt_square, #bt_ans, #bt_sign, #bt_inverse{\n"
"	background-color: rgb(36, 30, 47);\n"
"	color: rgb(33, 135, 161);\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}\n"
"#bt_modulo:hover, #bt_abs:hover, #bt_exp:hover, #bt_factorial:hover, #bt_square_root:hover, #bt_n_root:hover, #bt_square:hover, #bt_ans:hover, #bt_sign:hover, #bt_inverse:hover{\n"
""
                        "	border: 1px solid rgb(33, 135, 161);\n"
"}\n"
"/***************************************************labels***************************************************/\n"
"QLabel{\n"
"	color: rgb(213, 236, 245);\n"
"	border-bottom-width: 1px;\n"
"	border-bottom-style: solid;\n"
"	border-radius: 0px;\n"
"	border-bottom-color: rgb(33, 135, 161);\n"
"}\n"
"#lb_expression{\n"
"	font: 14pt \"Segoe UI\";\n"
"}\n"
"#lb_number{\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"/***************************************************help***************************************************/\n"
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
        bt_equal->setGeometry(QRect(230, 580, 60, 60));
        bt_equal->setMouseTracking(true);
        bt_equal->setAcceptDrops(false);
        bt_equal->setAutoFillBackground(false);
        bt_equal->setStyleSheet(QString::fromUtf8(""));
        bt_equal->setAutoDefault(false);
        bt_equal->setFlat(false);
        lb_long = new QLabel(centralwidget);
        lb_long->setObjectName("lb_long");
        lb_long->setGeometry(QRect(20, 110, 271, 40));
        lb_long->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lb_number = new QLabel(centralwidget);
        lb_number->setObjectName("lb_number");
        lb_number->setGeometry(QRect(140, 50, 150, 60));
        lb_number->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        bt_help = new QPushButton(centralwidget);
        bt_help->setObjectName("bt_help");
        bt_help->setGeometry(QRect(260, 10, 30, 30));
        bt_help->setMouseTracking(true);
        bt_help->setAcceptDrops(false);
        bt_help->setStyleSheet(QString::fromUtf8(""));
        bt_help->setAutoDefault(false);
        bt_help->setFlat(false);
        bt_divide = new QPushButton(centralwidget);
        bt_divide->setObjectName("bt_divide");
        bt_divide->setGeometry(QRect(230, 300, 60, 60));
        bt_multiply = new QPushButton(centralwidget);
        bt_multiply->setObjectName("bt_multiply");
        bt_multiply->setGeometry(QRect(230, 370, 60, 60));
        bt_minus = new QPushButton(centralwidget);
        bt_minus->setObjectName("bt_minus");
        bt_minus->setGeometry(QRect(230, 440, 60, 60));
        bt_plus = new QPushButton(centralwidget);
        bt_plus->setObjectName("bt_plus");
        bt_plus->setGeometry(QRect(230, 510, 60, 60));
        bt_abs = new QPushButton(centralwidget);
        bt_abs->setObjectName("bt_abs");
        bt_abs->setGeometry(QRect(90, 300, 60, 60));
        bt_modulo = new QPushButton(centralwidget);
        bt_modulo->setObjectName("bt_modulo");
        bt_modulo->setGeometry(QRect(20, 300, 60, 60));
        bt_0 = new QPushButton(centralwidget);
        bt_0->setObjectName("bt_0");
        bt_0->setGeometry(QRect(20, 580, 60, 60));
        bt_sign = new QPushButton(centralwidget);
        bt_sign->setObjectName("bt_sign");
        bt_sign->setGeometry(QRect(90, 160, 60, 60));
        bt_point = new QPushButton(centralwidget);
        bt_point->setObjectName("bt_point");
        bt_point->setGeometry(QRect(160, 580, 60, 60));
        bt_1 = new QPushButton(centralwidget);
        bt_1->setObjectName("bt_1");
        bt_1->setGeometry(QRect(20, 510, 60, 60));
        bt_2 = new QPushButton(centralwidget);
        bt_2->setObjectName("bt_2");
        bt_2->setGeometry(QRect(90, 510, 60, 60));
        bt_3 = new QPushButton(centralwidget);
        bt_3->setObjectName("bt_3");
        bt_3->setGeometry(QRect(160, 510, 60, 60));
        bt_4 = new QPushButton(centralwidget);
        bt_4->setObjectName("bt_4");
        bt_4->setGeometry(QRect(20, 440, 60, 60));
        bt_5 = new QPushButton(centralwidget);
        bt_5->setObjectName("bt_5");
        bt_5->setGeometry(QRect(90, 440, 60, 60));
        bt_6 = new QPushButton(centralwidget);
        bt_6->setObjectName("bt_6");
        bt_6->setGeometry(QRect(160, 440, 60, 60));
        bt_7 = new QPushButton(centralwidget);
        bt_7->setObjectName("bt_7");
        bt_7->setGeometry(QRect(20, 370, 60, 60));
        bt_8 = new QPushButton(centralwidget);
        bt_8->setObjectName("bt_8");
        bt_8->setGeometry(QRect(90, 370, 60, 60));
        bt_9 = new QPushButton(centralwidget);
        bt_9->setObjectName("bt_9");
        bt_9->setGeometry(QRect(160, 370, 60, 60));
        bt_factorial = new QPushButton(centralwidget);
        bt_factorial->setObjectName("bt_factorial");
        bt_factorial->setGeometry(QRect(160, 300, 60, 60));
        bt_square = new QPushButton(centralwidget);
        bt_square->setObjectName("bt_square");
        bt_square->setGeometry(QRect(20, 230, 60, 60));
        bt_exp = new QPushButton(centralwidget);
        bt_exp->setObjectName("bt_exp");
        bt_exp->setGeometry(QRect(90, 230, 60, 60));
        bt_square_root = new QPushButton(centralwidget);
        bt_square_root->setObjectName("bt_square_root");
        bt_square_root->setGeometry(QRect(160, 230, 60, 60));
        bt_n_root = new QPushButton(centralwidget);
        bt_n_root->setObjectName("bt_n_root");
        bt_n_root->setGeometry(QRect(230, 230, 60, 60));
        bt_inverse = new QPushButton(centralwidget);
        bt_inverse->setObjectName("bt_inverse");
        bt_inverse->setGeometry(QRect(160, 160, 60, 60));
        bt_ac = new QPushButton(centralwidget);
        bt_ac->setObjectName("bt_ac");
        bt_ac->setGeometry(QRect(230, 160, 60, 60));
        bt_ans = new QPushButton(centralwidget);
        bt_ans->setObjectName("bt_ans");
        bt_ans->setGeometry(QRect(20, 160, 60, 60));
        bt_00 = new QPushButton(centralwidget);
        bt_00->setObjectName("bt_00");
        bt_00->setGeometry(QRect(90, 580, 60, 60));
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
        lb_long->setText(QString());
        lb_number->setText(QString());
        bt_help->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        bt_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        bt_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        bt_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bt_abs->setText(QCoreApplication::translate("MainWindow", "|x|", nullptr));
        bt_modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        bt_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bt_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        bt_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        bt_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        bt_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        bt_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        bt_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        bt_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        bt_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        bt_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        bt_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        bt_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        bt_factorial->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        bt_square->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        bt_exp->setText(QCoreApplication::translate("MainWindow", "x\342\201\277", nullptr));
        bt_square_root->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        bt_n_root->setText(QCoreApplication::translate("MainWindow", "\342\201\277\342\210\232x", nullptr));
        bt_inverse->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        bt_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        bt_ans->setText(QCoreApplication::translate("MainWindow", "Ans", nullptr));
        bt_00->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H