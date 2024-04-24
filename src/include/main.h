/**
 * @file main.h
 * @authors Denys Pylypenko, Adam Veselý, Eliška Křeménková, Jaroslava Comová
 * 
 * @brief Header file for main.cpp
*/

#ifndef _MAIN_H_
#define _MAIN_H_

#include <cmath>
#include <stdexcept>

#define ERROR_DIVIDE_ZERO -1
#define ERROR_OUT_OF_RANGE 1337
#define MAX_FAKTORIAL 165
#define ERROR_VALUE -2


#define EPSILON 1e-10

/**
 * @brief addition: adds num2 to num1
 * 
 * @param[in] num1 first argument of type double
 * @param[in] num2 second argument of type double
 * @return double (num1 + num2)
*/
double add(double num1, double num2);

/**
 * @brief subtraction: subtracts num2 from num1
 * 
 * @param[in] num1 first argument of type double
 * @param[in] num2 second argument of type double
 * @return double (num1 - num2)
*/
double subtract(double num1, double num2);

/**
 * @brief multiplication: multiplies num1 by num2
 * 
 * @param[in] num1 first argument of type double
 * @param[in] num2 second argument of type double
 * @return double (num1 * num2)
*/
double multiply(double num1, double num2);

/**
 * @brief division: divides num1 by num2
 * 
 * @param[in] num1 first argument of type double
 * @param[in] num2 second argument of type double
 * @return double (num1 / num2)
 * @exception throws ERROR_DIVIDE_ZERO if num2 is 0
*/
double divide(double num1, double num2);

/**
 * @brief factorial: factorializes num
 * 
 * @param[in] num number that will be factorialized
 * @return double (num!) -> (num * (num - 1) * ... * 2 * 1)
 * @exception throws ERROR_VALUE if num is negative or bigger than MAX_FAKTORIAL
*/
double factorial(double num);

/**
 * @brief exponentiation: raises num1 to the power of num2
 * 
 * @param[in] num the base number
 * @param[in] exp the exponent
 * @return double (num1 ^ num2)
 * @exception throws ERROR_VALUE if num2 is negative or not an integer
 * @exception throws ERROR_VALUE if num1 and num2 are both 0
*/
double exponent(double num, double exp);

/**
 * @brief absolute: absolutes num
 * 
 * @param[in] num number that will be absoluted
 * @return double (|num|)
*/
double absolute(double num);

/**
 * @brief sign: changes the sign of num
 * 
 * @param[in] num number whose sign will be changed
 * @return double (num * (-1))
*/
double sign(double num);

/**
 * @brief inversion: inverts num
 * 
 * @param[in] num number that will be inverted
 * @return double (1 / num)
 * @exception throws ERROR_DIVIDE_ZERO if num is 0
*/
double inverse(double num);

/**
 * @brief modulo: returns the remainder of num1 divided by num2
 * 
 * @param[in] num1 first argument of type double
 * @param[in] num2 second argument of type double
 * @return double (num1 % num2)
*/
double modulo(double num1, double num2);

/**
 * @brief root: returns the nth root of num
 * 
 * @param[in] num number whose root will be returned
 * @param[in] root number that specifies the type of root (2 for square root, 3 for cube root, n for nth root, etc.)
 * @return double (num ^ (1 / root))
 * @exception throws ERROR_VALUE if root is less than or equal to 0
 * @exception throws ERROR_VALUE if root is not an integer
 * @exception throws ERROR_VALUE if num is negative and root is an even number (divisible by 2)
*/
double root(double num, double root);

#endif

/*** End of file main.h ***/