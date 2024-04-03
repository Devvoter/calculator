// Project name: Calculator
// file: mathLib.h
// date: 29.03.2024
// autors:
// 

#include "main.h"


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

    if(num2 == 0) throw std::runtime_error("Cannot divide with 0.");
    return (num1 / num2);
}
// x!
double factorial(double num) {

    if (num < 0 || num > MAX_FAKTORIAL) throw std::runtime_error("Incorrect value.");
    if (num == 0) return 1;

    return (num * factorial(num - 1));
}
// x^
double exponent(double num, double exp) {

    if (exp < 0  || (int(exp) != exp)) throw std::runtime_error("Incorrect value."); // in task exp must natural number
    if (num == 0 && exp == 0) throw std::runtime_error("0 power of 0 is not defined.");
    if (exp == 0) return 1;


    double number = 1;
    for (int i = 1; i <= exp; i++) number *= exp;
    
    return number;
}
// |x|
double absolute(double num) {
    if (num < 0) return -num;
    return num;
}
// %
double modulo(double num1, double num2) {
    return num1 % num2;
}
// root(4,2) = 2.0
double root(double num, double root){
    if ((root <= 0) || (int(root) != root)) throw std::runtime_error("Incorrect root.");
    if ((num < 0)   && (int(root) % 2 == 0)) throw std::runtime_error("Incorrect root and value"); // root from a negative number when root is even
    double guess = num / root; // initial approximation
    double prev_guess = 0; // to store the previous approximation
    
    // until the difference between the current and previous guesses is less than epsilon
    while(absoulte(guess - prev_guess) > EPSILON) {
        prev_guess = guess;
        // update the guess (more .. Newton's method formula for nth root)
        guess = ((root - 1) * guess + num / exponent(guess, root - 1)) / num;
    }
    return guess;
}