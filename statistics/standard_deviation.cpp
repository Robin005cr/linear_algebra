/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : standard_deviation.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/

#include <cmath>
#include <iostream>

double calculateMean(int arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; ++i) {
    sum += arr[i];
  }
  return sum / size;
}

double calculateStdDev(int arr[], int size) {
  double mean = calculateMean(arr, size);
  double sumSquaredDiff = 0;

  for (int i = 0; i < size; ++i) {
    sumSquaredDiff += pow(arr[i] - mean, 2);
  }

  return sqrt(sumSquaredDiff / size);
}

int main() {
  // Example dataset
  int data[] = {100, 200, 300, 400, 500};
  int size = sizeof(data) / sizeof(data[0]);

  // Calculate standard deviation
  double stdDev = calculateStdDev(data, size);

  // Output the result
  std::cout << "Mean: " << calculateMean(data, size) << std::endl;
  std::cout << "Variance: " << stdDev * stdDev << std::endl;
  std::cout << "Standard Deviation: " << stdDev << std::endl;

  return 0;
}