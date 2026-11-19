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
// x,y,z are the side length
struct Triangle
{
    float x, y, z;
};
// x,y are points in the coordinates
struct TrianglePoint
{
    float x, y;
    TrianglePoint(float x, float y) : x(x), y(y) {}
};

struct TriangleOperations
{
    TrianglePoint calcCentroid(const TrianglePoint &a,
                               const TrianglePoint &b,
                               const TrianglePoint &c) const
    {
        return {
            (a.x + b.x + c.x) / 3.0f,
            (a.y + b.y + c.y) / 3.0f};
    }

    float calcAreaWithBaseHeight(float base, float height) const
    {
        return 0.5f * base * height;
    }

    float calcAreaUsingHeronsFormula(const Triangle &triangle) const
    {
        const float s = (triangle.x + triangle.y + triangle.z) / 2.0f;
        return sqrt(s * (s - triangle.x) * (s - triangle.y) * (s - triangle.z));
    }

    bool proveTriangle(const Triangle &triangle) const
    {
        return triangle.x + triangle.y > triangle.z &&
               triangle.y + triangle.z > triangle.x &&
               triangle.x + triangle.z > triangle.y &&
               triangle.x > 0.0f && triangle.y > 0.0f && triangle.z > 0.0f;
    }
    static float cross(const TrianglePoint &a, const TrianglePoint &b, const TrianglePoint &p)
    {
        return (b.x - a.x) * (p.y - a.y) - (b.y - a.y) * (p.x - a.x);
    }

};

int main()
{
    Triangle T1{3.0f, 4.0f, 5.0f};
    TriangleOperations ops;

    cout << "Triangle valid? " << (ops.proveTriangle(T1) ? "Yes" : "No") << '\n';
    cout << "Area using base-height: " << ops.calcAreaWithBaseHeight(4.0f, 3.0f) << '\n';
    cout << "Area using Heron's formula: " << ops.calcAreaUsingHeronsFormula(T1) << '\n';
    TrianglePoint P1(2.1, 3);
    TrianglePoint P2(4, 5);
    TrianglePoint P3(3, 4);

    const TrianglePoint centroid = ops.calcCentroid(
        P1, P2, P3);
    cout << "Centroid: (" << centroid.x << ", " << centroid.y << ")\n";

    return 0;
}