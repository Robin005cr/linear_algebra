/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : standard_deviation_stl.cpp
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
#include <numeric>
#include <vector>

double calculateStdDev(const std::vector<int>& data) {
  double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();

  double sumSquaredDiff = std::accumulate(
      data.begin(), data.end(), 0.0,
      [mean](double acc, int value) { return acc + pow(value - mean, 2); });

  return sqrt(sumSquaredDiff / data.size());
}

int main() {
  // Example dataset
  std::vector<int> data = {100, 200, 300, 400, 500};

  // Calculate standard deviation
  double stdDev = calculateStdDev(data);

  // Output the result
  std::cout << "Mean: "
            << std::accumulate(data.begin(), data.end(), 0.0) / data.size()
            << std::endl;
  std::cout << "Variance: " << stdDev * stdDev << std::endl;
  std::cout << "Standard Deviation: " << stdDev << std::endl;

  return 0;
}