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

    if(num2 == 0) throw ERROR_DIVIDE_ZERO;
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


    double number = num;
    for (int i = 1; i < exp; i++) {
        num*= number;
    }
    
    return num;
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
double root(double num, double root){
    if ((root <= 0) || (int(root) != root)) return ERROR_VALUE; 
    if ((num < 0) && (int(root) % 2 == 0)) return ERROR_VALUE; // root from a negative number when root is even
    double guess = num / root; // initial approximation
    double prev_guess = 0; // to store the previous approximation
    
    // until the difference between the current and previous guesses is less than epsilon
    while(absolute(guess - prev_guess) > EPSILON) {
        prev_guess = guess;
        // update the guess (more .. Newton's method formula for nth root)
        guess = ((root - 1) * guess + num / exponent(guess, root - 1)) / num;
    }
    return guess;
}

