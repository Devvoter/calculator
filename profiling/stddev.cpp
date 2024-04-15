#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include "../include/main.h"

// Function to calculate the mean of a dataset.
double calculateMean(const std::vector<double>& data) {
    double sum = 0.0;
    // Accumulate the sum of all data points.
    for (double value : data) {
        sum = add(sum, value);
    }
    // Divide the sum by the number of data points to get the mean.
    return divide(sum, data.size());
}

// Function to calculate the variance of a dataset.
double calculateVariance(const std::vector<double>& data, double mean) {
    double variance = 0.0;
    // Compute the sum of squared differences from the mean.
    for (double value : data) {
        double diff = subtract(value, mean);
        variance = add(variance, multiply(diff, diff));
    }
    // Divide by the number of data points minus one to get the variance.
    // This uses Bessel's correction to provide an unbiased estimate.
    return divide(variance, subtract(data.size(), 1));
}

// Function to calculate the standard deviation from the variance.
double calculateStdDev(double variance) {
    // Take the square root of the variance to get the standard deviation.
    return root(variance, 2);
}

int main() {
    std::vector<double> data;
    double value;
    
    // Read data from stdin until EOF (End of File).
    while (std::cin >> value) {
        // Add each value to the dataset.
        data.push_back(value);
    }
    
    // Calculate the mean of the dataset.
    double mean = calculateMean(data);
    // Calculate the variance of the dataset.
    double variance = calculateVariance(data, mean);
    // Calculate the standard deviation of the dataset.
    double stdDev = calculateStdDev(variance);

    // Output the standard deviation to the standard output.
    std::cout << stdDev << std::endl;

    return 0;
}
