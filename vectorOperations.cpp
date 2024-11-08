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
