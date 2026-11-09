#include <iostream>
#include "electric_field.h"
#include "magnetic_field.h"

using namespace std;

int main() {
    Electric_Field E_default;
    Magnetic_Field B_default;

    //use parameterized constructor
    Electric_Field E_components(1e5, 10.9, 1.7e2);
    Magnetic_Field B_components(1.0, 2.0, 2.0);

    //use setter functions
    //E default becomes (3,4,12) so magnitude is 13
    E_default.setX(3.0);
    E_default.setY(4.0);
    E_default.setZ(12.0);

    //B default becomes (2,4,6)
    B_default.setX(2.0);
    B_default.setY(4.0);
    B_default.setZ(6.0);

    //outputs
    cout << " Electric field:" << endl;
    cout << "  E_components magnitude: " << E_components.calculateMagnitude() << endl;
    cout << "  E_default magnitude (after setters): " << E_default.calculateMagnitude() << endl;
    cout << "  E_components inner product: " << E_components.calculateInnerProduct() << endl; 
    cout << endl;

    cout << " Magnetic field :" << endl;
    cout << "  B_components magnitude: " << B_components.calculateMagnitude() << endl;
    cout << "  B_default magnitude (after setters): " << B_default.calculateMagnitude() << endl;
    B_components.calculateUnitVector();

    return 0;
}
