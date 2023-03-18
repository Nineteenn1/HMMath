#include "../Precompiled.h"

namespace Homemade
{
    class Vector2
    {
    public:
        Vector2::Vector2(float x, float y)
            : x(x), y(y)
        {

        }

        Vector2::Vector2(Vector2& vector)
            : x(vector.x), y(vector.y)
        {
            
        }
    public: 
        inline Vector2 Zero() { return Vector2 { 0.0f, 0.0f }; }
        inline Vector2 Normalize(Vector2& vector) { return Vector2 { vector / vector.Length() }; }

        inline float DotProduct(Vector2& vector) { return { x * vector.x + y * vector.y }; }
        inline float Length() { return sqrt(x*x + y*y); }

    public:
        inline Vector2 operator+(const Vector2& vector)
        {
            return Vector2 { x + vector.x, y + vector.y };
        }

        inline Vector2 operator-(const Vector2& vector)
        {
            return Vector2 { x - vector.x, y - vector.y };
        }

        inline Vector2 operator*(const Vector2& vector)
        {
            return Vector2 { x * vector.x, y * vector.y };
        }

        inline Vector2 operator*(const float& multiplicand)
        {
            return Vector2 { x * multiplicand, y * multiplicand };
        }

        inline Vector2 operator*(const int& multiplicand)
        {
            return Vector2 { x * multiplicand, y * multiplicand };
        }

        inline Vector2 operator/(const Vector2& vector)
        {
            return Vector2 { x / vector.x, y / vector.y };
        }

        inline Vector2 operator/(const float& divisor)
        {
            return Vector2 { x / divisor, y / divisor };
        }

        inline Vector2 operator/(const int& divisor)
        {
            return Vector2 { x / divisor, y / divisor };
        }

        inline const Vector2& operator+=(const Vector2& vector)
        {
            x += vector.x;
            y += vector.y;

            return *this;
        }

        inline const Vector2& operator-=(const Vector2& vector)
        {
            x -= vector.x;
            y -= vector.y;

            return *this;
        }

        inline const Vector2& operator*=(const Vector2& vector)
        {
            x *= vector.x;
            y *= vector.y;

            return *this;
        }

        inline const Vector2& operator/=(const Vector2& vector)
        {
            x /= vector.x;
            y /= vector.y;

            return *this;
        }

        inline const Vector2& operator=(const Vector2& vector)
        {
            x = vector.x;
            y = vector.y;

            return *this;
        }

        inline bool operator==(const Vector2& vector)
        {
            return x == vector.x && y == vector.y;
        }

        inline bool operator<(const Vector2& vector)
        {
            return x < vector.x && y < vector.y;
        }

        inline bool operator>(const Vector2& vector)
        {
            return x > vector.x && y > vector.y;
        }

        inline bool operator<=(const Vector2& vector)
        {
            return x <= vector.x && y <= vector.y;
        }

        inline bool operator>=(const Vector2& vector)
        {
            return x >= vector.x && y >= vector.y;
        }

    public:
        float x, y;
    };
}