#include <iostream>
#include <cmath>
using namespace std;

int main() {
 	double radianes, coseno;

    for (int grados = 0; grados <= 360; grados += 45) {
    	
        radianes = grados * 3.1416 / 180.0;

        coseno = cos(radianes);

        cout << "Coseno de " << grados << " grados es: " << coseno << endl;
    }

    return 0;
}


