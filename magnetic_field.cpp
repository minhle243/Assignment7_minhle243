#include "magnetic_field.h"
#include <iostream>
#include <cmath>
using namespace std;


Magnetic_Field::Magnetic_Field()
{
    B = new double[3];
    B[0] = 0.0;
    B[1] = 0.0;
    B[2] = 0.0;
}

// allocate memory of 3 components
Magnetic_Field::Magnetic_Field(double x, double y, double z)
{
    B = new double[3];
    B[0] = x;
    B[1] = y;
    B[2] = z;
}

// destructor - free the dynamic array
Magnetic_Field::~Magnetic_Field()
{
    delete[] B;
}

// getters
double Magnetic_Field::getX() { return B[0]; }
double Magnetic_Field::getY() { return B[1]; }
double Magnetic_Field::getZ() { return B[2]; }

// setters
void Magnetic_Field::setX(double x) { B[0] = x; }
void Magnetic_Field::setY(double y) { B[1] = y; }
void Magnetic_Field::setZ(double z) { B[2] = z; }

// magnitude = sqrt(x^2 + y^2 + z^2)
double Magnetic_Field::calculateMagnitude()
{
    return sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);
}

// unit vector = B / |B|, printed to the screen
void Magnetic_Field::calculateUnitVector()
{
    double mag = calculateMagnitude();

    // can't divide by zero
    if (mag == 0.0)
    {
        cout << "Unit vector is undefined " << endl;
        return;
    }

    cout << "Unit vector: (" << B[0] / mag << ", "
         << B[1] / mag << ", " << B[2] / mag << ")" << endl;
}
