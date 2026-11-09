#include "electric_field.h"
#include <cmath>

// default constructor 
Electric_Field::Electric_Field()
{
    E = new double[3];
    E[0] = 0.0;
    E[1] = 0.0;
    E[2] = 0.0;
}

// allocate array of 3 doubles
Electric_Field::Electric_Field(double x, double y, double z)
{
    E = new double[3];
    E[0] = x;
    E[1] = y;
    E[2] = z;
}

// use delete[] to avoid memory leaks
Electric_Field::~Electric_Field()
{
    delete[] E;
}

// getters
double Electric_Field::getX() { return E[0]; }
double Electric_Field::getY() { return E[1]; }
double Electric_Field::getZ() { return E[2]; }

// setters
void Electric_Field::setX(double x) { E[0] = x; }
void Electric_Field::setY(double y) { E[1] = y; }
void Electric_Field::setZ(double z) { E[2] = z; }

// magnitude = sqrt(x^2 + y^2 + z^2)
double Electric_Field::calculateMagnitude()
{
    return sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
}

// inner product of E with itself: E . E = x*x + y*y + z*z
double Electric_Field::calculateInnerProduct()
{
    return E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
}
