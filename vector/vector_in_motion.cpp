/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : vector_in_motion.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

struct Vector3D
{
    float x, y, z;

    float calcMagnitude() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    Vector3D calcUnitVector() const
    {
        const float magnitude = calcMagnitude();

        if (magnitude == 0.0f)
        {
            return {0.0f, 0.0f, 0.0f};
        }

        return {x / magnitude, y / magnitude, z / magnitude};
    }
};

class VectorOperations
{
public:
    float dotProduct(const Vector3D& a, const Vector3D& b) const
    {
        return a.x * b.x + a.y * b.y + a.z * b.z;
    }

    Vector3D crossProduct(const Vector3D& a, const Vector3D& b) const
    {
        return {
            a.y * b.z - a.z * b.y,
            a.z * b.x - a.x * b.z,
            a.x * b.y - a.y * b.x};
    }

    float getAngle(const Vector3D& a, const Vector3D& b) const
    {
        const float magnitudeProduct = a.calcMagnitude() * b.calcMagnitude();

        if (magnitudeProduct == 0.0f)
        {
            return 0.0f;
        }

        const float cosine = dotProduct(a, b) / magnitudeProduct;
        const float clampedCosine = max(-1.0f, min(1.0f, cosine));

        return acos(clampedCosine) * 180.0f / 3.14159265358979323846f;
    }
};

int main()
{
    Vector3D A{3.0f, 5.0f, 2.0f};
    Vector3D B{1.0f, 0.0f, 0.0f};
    VectorOperations op;

    cout << "Magnitude of A: " << A.calcMagnitude() << '\n';

    const Vector3D unitA = A.calcUnitVector();
    cout << "Unit vector of A: (" << unitA.x << ", " << unitA.y << ", " << unitA.z << ")\n";

    cout << "Dot product A·B: " << op.dotProduct(A, B) << '\n';

    const Vector3D crossAB = op.crossProduct(A, B);
    cout << "Cross product A×B: (" << crossAB.x << ", " << crossAB.y << ", " << crossAB.z << ")\n";

    cout << "Angle between A and B: " << op.getAngle(A, B) << " degrees\n";

    return 0;
}
