#include<vector.h>

vector::vector(float i, float j, float k)
{
    x = i;
    y = j;
    z = k;
}

vector::vector()
{
    x = y = z = 0;
}

void vector::setData()
{
    std::cout << "Enter X component: ";
    std::cin >> x;

    std::cout << "Enter Y component: ";
    std::cin >> y;

    std::cout << "Enter Z component: ";
    std::cin >> z;
}

std::ostream& operator<<(std::ostream &os, vector vect)
{
    os << "<" <<vect.x << ", " << vect.y << ", " << vect.z << ">";
}

vector vector::operator+(vector rhs)
{
    vector temp;

    temp.x = x + rhs.x;
    temp.y = y + rhs.y;
    temp.z = z + rhs.z;

    return temp;
}

vector vector::operator-(vector rhs)
{
    vector temp;

    temp.x = x - rhs.x;
    temp.y = y - rhs.y;
    temp.z = z - rhs.z;

    return temp;
}

float dotProduct(vector lhs, vector rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

vector crossProduct(vector lhs, vector rhs)
{
    vector temp;

    temp.x = lhs.x * rhs.z - lhs.z * rhs.y;
    temp.y = lhs.z * rhs.x - lhs.x * rhs.z;
    temp.z = lhs.x * rhs.y - lhs.y * rhs.x;

    return temp;
}

void vector::operator*(float rhs)
{
    x = x * rhs;
    y = y * rhs;
    z = z * rhs;
}
