// Project name: Calculator
// file: main.h
// date: 26.03.2024
// autors: 
// 

#ifndef _MAIN_H_
#define _MAIN_H_

#include <cmath>
#include <stdexcept>

#define ERROR_DIVIDE_ZERO -1
#define ERROR_OUT_OF_RANGE 1337
#define MAX_FAKTORIAL 165
#define ERROR_VALUE -2


#define EPSILON 1e-10

// prototypes for funkcion
// +
double add(double num1, double num2);
// -
double subtract(double num1, double num2);
// *
double multiply(double num1, double num2);
// /
double divide(double num1, double num2);
// !
double factorial(double num);
// ^
double exponent(double num, double exp);
// |x|
double absolute(double num);
// x --> -x
double sign(double num);
// x --> 1/x
double inverse(double num);
// %
double modulo(double num1, double num2);
// root(4,2) = 2.0
double root(double num, double root);

#endif