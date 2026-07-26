/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : 2D_Convolution.cpp
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

using Matrix = std::vector<std::vector<double>>;

// Performs a 2D convolution (Valid Padding)
Matrix convolve2D(const Matrix& input, const Matrix& kernel) {
    int inputRows = input.size();
    int inputCols = input[0].size();
    int kernelRows = kernel.size();
    int kernelCols = kernel[0].size();

    // Calculate dimensions of the output matrix
    int outputRows = inputRows - kernelRows + 1;
    int outputCols = inputCols - kernelCols + 1;
    Matrix result(outputRows, std::vector<double>(outputCols, 0.0));

    // Slide the kernel over the input matrix
    for (int r = 0; r < outputRows; ++r) {
        for (int c = 0; c < outputCols; ++c) {
            double sum = 0.0;
            // Perform element-wise multiplication within the current window
            for (int kr = 0; kr < kernelRows; ++kr) {
                for (int kc = 0; kc < kernelCols; ++kc) {
                    sum += input[r + kr][c + kc] * kernel[kr][kc];
                }
            }
            result[r][c] = sum;
        }
    }
    return result;
}

int main() {
    // 4x4 Input Matrix
    Matrix input = {
        {1, 2, 3, 0},
        {0, 1, 2, 3},
        {3, 0, 1, 2},
        {2, 3, 0, 1}
    };

    // 3x3 Edge Detection / Blur Style Kernel
    Matrix kernel = {
        {1, 0, -1},
        {1, 0, -1},
        {1, 0, -1}
    };

    Matrix output = convolve2D(input, kernel);

    std::cout << "2D Convolution Output:\n";
    for (const auto& row : output) {
        for (double val : row) {
            std::cout << val << " \t";
        }
        std::cout << "\n";
    }
    return 0;
}
