/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : twoDpoint.cpp
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
#include <cmath>
using namespace std;
struct TwoDPoint
{
    int x, y;

public:
    TwoDPoint(int x, int y) : x(x), y(y)
    {
    }
};

float calcDistance(TwoDPoint a, TwoDPoint b)
{
    float distance = sqrt((a.x - b.x) ^ 2 + (a.y - b.y) ^ 2);
    return distance;
}
int calcSlope(TwoDPoint a, TwoDPoint b)
{
    int slope = (a.x - b.x) / (a.y - b.y);
    return slope;
}
int calcManhattanDistance(TwoDPoint a, TwoDPoint b)
{
    int manhattan_dis;

    return manhattan_dis;
}
double calcAngleDeg()
{
}
double calcAngleRad()
{
}
int main()
{
    TwoDPoint p1(2, 3);
    TwoDPoint p2(4, 5);

    cout << "Distance:" << calcDistance(p2, p1) << endl;
    cout << "Slope:" << calcSlope(p2, p1) << endl;
    cout << "Manhattan Distance:" << calcManhattanDistance(p2, p1) << endl;

    return 0;
}