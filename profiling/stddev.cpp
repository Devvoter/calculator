#include "../include/main.h"
#include <iostream>

using namespace std;

/**
 * @brief Function to calculate standard deviation.
 * @return 0 if successful, -1 if no numbers were provided.
 */
int main(int argc, char *argv[]){
    // Declaration of necessary variables
    double number, deviation, mean, sum_1 = 0, sum_2 = 0, var = 0, count = 0;
    
    // Reading numbers from standard input
    while(fscanf(stdin, "%lf", &number) != EOF){
        sum_1 = add(sum_1, number); // Calculating the sum of the numbers
        sum_2 = add(sum_2, exponent(number, 2)); // Calculating the sum of the squares of the numbers
        count = add(count, 1); // Incrementing the total number count
    }
    // Error if no numbers were entered
    if(count == 0){
        fprintf(stderr, "Error, no number provided.\n");
        return -1;
    }
    
    mean = divide(sum_1, count); // Calculating the mean
    var = subtract(sum_2, multiply(exponent(mean, 2), count)); // Calculating the variance
    // CORRECTION: Now subtracting 1 from the total number count to ensure the correct result
    var = divide(var, subtract(count, 1)); // Dividing the variance by the total number count
    deviation = root(var, 2); // Calculating the square root of the variance
    
    // Printing the standard deviation to standard output
    cout << deviation << endl;

    return 0;
}
