/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : triangle.cpp
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

using namespace std;

struct Triangle
{
    float x, y, z;
};

struct TriangleOperations
{
    float calcAreaWithBaseHeight(float base, float height) const
    {
        return 0.5f * base * height;
    }

    float calcAreaUsingHeronsFormula(const Triangle& triangle) const
    {
        const float s = (triangle.x + triangle.y + triangle.z) / 2.0f;
        return sqrt(s * (s - triangle.x) * (s - triangle.y) * (s - triangle.z));
    }

    bool proveTriangle(const Triangle& triangle) const
    {
        return triangle.x + triangle.y > triangle.z &&
               triangle.y + triangle.z > triangle.x &&
               triangle.x + triangle.z > triangle.y &&
               triangle.x > 0.0f && triangle.y > 0.0f && triangle.z > 0.0f;
    }
};

int main()
{
    Triangle T1{3.0f, 4.0f, 5.0f};
    TriangleOperations ops;

    cout << "Triangle valid? " << (ops.proveTriangle(T1) ? "Yes" : "No") << '\n';
    cout << "Area using base-height: " << ops.calcAreaWithBaseHeight(4.0f, 3.0f) << '\n';
    cout << "Area using Heron's formula: " << ops.calcAreaUsingHeronsFormula(T1) << '\n';

    return 0;
}