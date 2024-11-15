#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double grados, radianes, seno;

    for (int grados = 0; grados <= 360; grados += 45) {

        radianes = grados * 3.1416 / 180.0;

        seno = sin(radianes);

        cout << "Seno de " << grados << " grados es: " << seno << endl;
    }

    
    return 0;
}


