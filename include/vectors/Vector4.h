#include "Precompiled.h"

namespace Homemade
{
    class Vector4
    {
    public:
        Vector4::Vector4(float x, float y, float z, float w)
            : x(x), y(y), z(z), w(w)
        {

        }

        Vector4::Vector4(Vector4& vector)
            : x(vector.x), y(vector.y), z(vector.z), w(vector.w)
        {
            
        }
    public:
        inline Vector4 Zero() { return Vector4 { 0.0f, 0.0f, 0.0f, 0.0f }; }
        inline Vector4 Normalize(Vector4& vector) { return Vector4 { vector / vector.Length() }; }

        inline float DotProduct(Vector4& vector) { return { x * vector.x + y * vector.y + z * vector.z + w * vector.w }; }
        inline float Length() { return sqrt(x*x + y*y + z*z + w*w); }
    public:
        inline Vector4 operator+(const Vector4& vector)
        {
            return Vector4 { x + vector.x, y + vector.y, z + vector.z, w + vector.w };
        }

        inline Vector4 operator-(const Vector4& vector)
        {
            return Vector4 { x - vector.x, y - vector.y, z - vector.z, w - vector.w };
        }

        inline Vector4 operator*(const Vector4& vector)
        {
            return Vector4 { x * vector.x, y * vector.y, z * vector.z, w * vector.w };
        }

        inline Vector4 operator*(const float& multiplicand)
        {
            return Vector4 { x * multiplicand, y * multiplicand, z * multiplicand, w *multiplicand };
        }

        inline Vector4 operator*(const int& multiplicand)
        {
            return Vector4 { x * multiplicand, y * multiplicand, z * multiplicand, w *multiplicand };
        }

        inline Vector4 operator/(const Vector4& vector)
        {
            return Vector4 { x / vector.x, y / vector.y, z / vector.z, w / vector.w };
        }

        inline Vector4 operator/(const float& divisor)
        {
            return Vector4 { x / divisor, y / divisor, z / divisor, w / divisor };
        }

        inline Vector4 operator/(const int& divisor)
        {
            return Vector4 { x / divisor, y / divisor, z / divisor, w / divisor };
        }

        inline const Vector4& operator+=(const Vector4& vector)
        {
            x += vector.x;
            y += vector.y;
            z += vector.z;
            w += vector.w;

            return *this;
        }

        inline const Vector4& operator-=(const Vector4& vector)
        {
            x -= vector.x;
            y -= vector.y;
            z -= vector.z;
            w -= vector.w;

            return *this;
        }

        inline const Vector4& operator*=(const Vector4& vector)
        {
            x *= vector.x;
            y *= vector.y;
            z *= vector.z;
            w *= vector.w;

            return *this;
        }

        inline const Vector4& operator/=(const Vector4& vector)
        {
            x /= vector.x;
            y /= vector.y;
            z /= vector.z;
            w /= vector.w;

            return *this;
        }

        inline const Vector4& operator=(const Vector4& vector)
        {
            x = vector.x;
            y = vector.y;
            z = vector.z;
            w = vector.w;

            return *this;
        }

        inline bool operator==(const Vector4& vector)
        {
            return x == vector.x && y == vector.y && z == vector.z && w == vector.w;
        }

        inline bool operator<(const Vector4& vector)
        {
            return x < vector.x && y < vector.y && z < vector.z && w < vector.w;
        }

        inline bool operator>(const Vector4& vector)
        {
            return x > vector.x && y > vector.y && z > vector.z && w > vector.w;
        }

        inline bool operator<=(const Vector4& vector)
        {
            return x <= vector.x && y <= vector.y && z <= vector.z && w <= vector.w;
        }

        inline bool operator>=(const Vector4& vector)
        {
            return x >= vector.x && y >= vector.y && z >= vector.z && w >= vector.w;
        }

    public:
        float x, y, z, w;
    };
}