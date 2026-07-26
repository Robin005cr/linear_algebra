/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : 1D_Convolution.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
#include <vector>

// Performs a full 1D linear convolution
std::vector<double> convolve1D(const std::vector<double>& signal, const std::vector<double>& kernel) {
    int n = signal.size();
    int m = kernel.size();
    std::vector<double> result(n + m - 1, 0.0);

    // Slide the kernel across the signal
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            result[i + j] += signal[i] * kernel[j];
        }
    }
    return result;
}

int main() {
    std::vector<double> signal = {1.0, 2.0, 3.0, 4.0};
    std::vector<double> kernel = {0.5, 1.0, 0.5};

    std::vector<double> output = convolve1D(signal, kernel);

    std::cout << "1D Convolution Result: ";
    for (double val : output) {
        std::cout << val << " ";
    }
    return 0;
}
