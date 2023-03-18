#include "Precompiled.h"

namespace Homemade
{
    class Vector3
    {
    public:
        Vector3::Vector3(float x, float y, float z)
            : x(x), y(y), z(z)
        {

        }

        Vector3::Vector3(Vector3& vector)
            : x(vector.x), y(vector.y), z(vector.z)
        {
            
        }
    public:
        inline Vector3 Zero() { return Vector3 { 0.0f, 0.0f, 0.0f }; }
        inline Vector3 Normalize(Vector3& vector) { return Vector3 { vector / vector.Length() }; }

        inline float DotProduct(Vector3& vector) { return { x * vector.x + y * vector.y + z * vector.z }; }
        inline float Length() { return sqrt(x*x + y*y + z*z); }
    public:
        inline Vector3 operator+(const Vector3& vector)
        {
            return Vector3 { x + vector.x, y + vector.y, z + vector.z };
        }

        inline Vector3 operator-(const Vector3& vector)
        {
            return Vector3 { x - vector.x, y - vector.y, z - vector.z };
        }

        inline Vector3 operator*(const Vector3& vector)
        {
            return Vector3 { x * vector.x, y * vector.y, z * vector.z };
        }

        inline Vector3 operator*(const float& multiplicand)
        {
            return Vector3 { x * multiplicand, y * multiplicand, z * multiplicand };
        }

        inline Vector3 operator*(const int& multiplicand)
        {
            return Vector3 { x * multiplicand, y * multiplicand, z * multiplicand };
        }

        inline Vector3 operator/(const Vector3& vector)
        {
            return Vector3 { x / vector.x, y / vector.y, z / vector.z };
        }

        inline Vector3 operator/(const float& divisor)
        {
            return Vector3 { x / divisor, y / divisor, z / divisor };
        }

        inline Vector3 operator/(const int& divisor)
        {
            return Vector3 { x / divisor, y / divisor, z / divisor };
        }

        inline const Vector3& operator+=(const Vector3& vector)
        {
            x += vector.x;
            y += vector.y;
            z += vector.z;

            return *this;
        }

        inline const Vector3& operator-=(const Vector3& vector)
        {
            x -= vector.x;
            y -= vector.y;
            z -= vector.z;

            return *this;
        }

        inline const Vector3& operator*=(const Vector3& vector)
        {
            x *= vector.x;
            y *= vector.y;
            z *= vector.z;

            return *this;
        }

        inline const Vector3& operator/=(const Vector3& vector)
        {
            x /= vector.x;
            y /= vector.y;
            z /= vector.z;

            return *this;
        }

        inline const Vector3& operator=(const Vector3& vector)
        {
            x = vector.x;
            y = vector.y;
            z = vector.z;

            return *this;
        }

        inline bool operator==(const Vector3& vector)
        {
            return x == vector.x && y == vector.y && z == vector.z;
        }

        inline bool operator<(const Vector3& vector)
        {
            return x < vector.x && y < vector.y && z < vector.z;
        }

        inline bool operator>(const Vector3& vector)
        {
            return x > vector.x && y > vector.y && z > vector.z;
        }

        inline bool operator<=(const Vector3& vector)
        {
            return x <= vector.x && y <= vector.y && z <= vector.z;
        }

        inline bool operator>=(const Vector3& vector)
        {
            return x >= vector.x && y >= vector.y && z >= vector.z;
        }

    public:
        float x, y, z;
    };
}