#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class vector
{
    public:
        vector(float, float , float);
        vector();

        void setData();
        friend float dotProduct(vector lhs, vector rhs);
        friend vector crossProduct(vector lhs, vector rhs);

        friend std::ostream &operator<<(std::ostream &os, vector vect);

        vector operator+(vector rhs);
        vector operator-(vector rhs);
        void operator*(float rhs);


    protected:

    private:
        float x;
        float y;
        float z;
};

#endif // VECTOR_H
