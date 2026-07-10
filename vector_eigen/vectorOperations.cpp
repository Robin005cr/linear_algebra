/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : vectorOperations.cpp
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
class Vector3D
{

    float x, y, z;
public:
    Vector3D(float x = 0, float y = 0, float z = 0) :x{ x }, y{ y },z{ z }
    { } 

    Vector3D operator +(const Vector3D& rhs)
    {
        Vector3D result;
        result.x = x + rhs.x;
        result.y = y + rhs.y;
        result.z = z + rhs.z;
        return result;
    }
    Vector3D operator -(const Vector3D& rhs)
    {
        Vector3D result;
        result.x = x - rhs.x;
        result.y = y - rhs.y;
        result.z = z - rhs.z;
        return result;
    }
    void print()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};
