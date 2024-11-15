#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double grados, radianes, tangente;

    for (int grados = 0; grados <= 360; grados += 45) {

        radianes = grados * 3.1416 / 180.0;

        tangente = tan(radianes);

        cout << "Tangente de " << grados << " grados es: " << tangente << endl;
    }
    return 0;
}


