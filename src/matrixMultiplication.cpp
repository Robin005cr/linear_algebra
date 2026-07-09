/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : matrixMultiplication.cpp
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
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible!" << endl;
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
