// Project name: Calculator
// file: mathLib.h
// date: 29.03.2024
// autors:
// 

#include "../include/main.h"

// #define ERROR_DIVIDE_ZERO -1
// #define ERROR_OUT_OF_RANGE 1337
// #define MAX_FAKTORIAL 165
// #define EPSILON 1e-10
// +
double add(double num1, double num2) {
    return (num1 + num2);
}
// -
double subtract(double num1, double num2) {
    return (num1 - num2);
}
// *
double multiply(double num1, double num2) {
    return (num1 * num2);
}
// /
double divide(double num1, double num2) {

    if(num2 == 0) return ERROR_DIVIDE_ZERO;
    return (num1 / num2);
}
// x!
double factorial(double num) {

    if (num < 0 || num > MAX_FAKTORIAL) return ERROR_VALUE;
    if (num == 0) return 1;

    return (num * factorial(num - 1));
}
// x^
double exponent(double num, double exp) {

    if (exp < 0  || ((int)(exp) != exp)) return ERROR_VALUE; // in task exp must natural number
    if (num == 0 && exp == 0) return ERROR_VALUE;
    if (exp == 0) return 1;


    double result = num;
    for (int i = 1; i < exp; i++) result*= num;

    return result;
}
// |x|
double absolute(double num) {
    if (num < 0) return -num;
    return num;
}
// %
double modulo(double num1, double num2) {
    return (int)num1 % (int)num2;
}
// root(4,2) = 2.0
/*
The root can be negative in conventional calculators, 
we should discuss this in the future.
*/

/*  odpovidam na otazku nahore
    ja bych to ted neresil a nechal bez tej zapornej odmocniny 
    protoze mame jeste dost co musime udelat, pokud zustane cas tak dodelame
     
     -Denys  

*/
// Function to calculate the nth root of a number using Newton's method
double root(double num, double root) {
    if (root <= 0 || (int)(root) != root) return ERROR_VALUE; // root must be a positive integer
    if (num < 0 && (int)(root) % 2 == 0) return ERROR_VALUE; // No even root of a negative number

    double guess = num / root; // Initial guess for Newton's method
    double prev_guess = 0;
    
    // Iterating until the difference between two consecutive guesses is less than EPSILON
    while (absolute(guess - prev_guess) > EPSILON) {
        prev_guess = guess;
        guess = ((root - 1) * prev_guess + num / exponent(prev_guess, root - 1)) / root; // Newton's formula
    }
    return guess;
}

