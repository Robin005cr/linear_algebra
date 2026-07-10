/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : matrixTranspose.cpp
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
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;
int main()
{


   return 0;
   std::cout << "Matrix Transpose Example" << std::endl;

    Eigen::Matrix3f mat;
    mat << 1, 2, 3,
           4, 5, 6,
           7, 8, 9;

    std::cout << "Original Matrix:\n" << mat << std::endl;
    
    Eigen::Matrix3f transposedMat = mat.transpose();
    std::cout << "Transposed Matrix:\n" << transposedMat << std::endl;
    return 0;
}