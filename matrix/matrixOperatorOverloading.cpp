/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : matrixOperatorOverloading.cpp
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

using namespace std;

class Matrix
{
public:
    vector<vector<int>> a;

    Matrix operator+(const Matrix &other)
    {
        Matrix result;
        for (size_t i = 0; i < a.size(); ++i)
        {
            vector<int> row;
            for (size_t j = 0; j < a[0].size(); ++j)
            {
                row.push_back(a[i][j] + other.a[i][j]);
            }
            result.a.push_back(row);
        }
        return result;
    }
};