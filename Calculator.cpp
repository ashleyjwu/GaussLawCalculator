#include <iostream>
using namespace std;

int main()
{
    //collect charge distribution
    char chargeDistr;
    while (true) {
        cout << "Hello! Please enter charge distribution type: C for Cylindrical, S for Spherical, P for Planar \n";
        cin >> chargeDistr;
        if (chargeDistr != 'C' && chargeDistr != 'S' && chargeDistr != 'P') {
            cout << "Not a valid input. Please try again! \n\n";
        }
        else {
            break;
        }
    }
    //collect radius and material
    char inside;
    if (chargeDistr == 'S' || chargeDistr == 'C') { //only matters for sphere and cylinder
        while (true) {
            cout << "Are we calculating E field inside the charged object or outside of it: I for Inside, O for Outside \n";
            cin >> inside;
            if (inside != 'I' && inside != 'O') {
                cout << "Not a valid input. Please try again! \n\n";
            }
            else {
                break;
            }
        }
        char material;
        while (true) {
            cout << "Is the material an insulator or conductor: I for Insulator, C for Conductor \n";
            cin >> material;
            if (material != 'I' && material != 'C') {
                cout << "Not a valid input. Please try again! \n\n";
            }
            else {
                break;
            }
        }
        if (material == 'C' && inside == 'I') {
            cout << "E field is always 0 inside a conductor :) \n";
        }
    }

    const float k = 8987742440;
    if (chargeDistr == 'C') {
        float chargeDen = 0;
        float radSph = 0;
        float rad = 0;
        cout << "Enter charge per length of cylinder, radius of cylinder, and radius of electric field (numerical values): \n";
        cin >> chargeDen >> radSph >> rad;
    }
    if (chargeDistr == 'S') {
        float charge = 0;
        float radSph = 0;
        float rad = 0;
        cout << "Enter charge of sphere, radius of sphere, and radius of electric field (numerical values): \n";
        cin >> charge >> radSph >> rad;
    }
    if (chargeDistr == 'P') {
        float chargeDen = 0;
        cout << "Enter charge per area of plane \n";
        cin >> chargeDen;
    }



    return 0;
}
