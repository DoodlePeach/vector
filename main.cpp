#include <iostream>
#include "vector.h"
//#include "functions.cpp"

vector operator*(vector vect)
{

}

using namespace std;

int main()
{
    vector v1{1.02, 2.1, 0}, v2{1, 4, 0}, v3;

    cout << v1 + v2 << endl;

    cout << dotProduct(v1, v2) << endl;
    cout << crossProduct(v1, v2) << endl;
    cout << v1;
    return 0;
}
