#include <iostream>
using namespace std;

int main() {
  	double velocidad_kmh, velocidad_ms;

    cout << "Introduce la velocidad del automóvil en km/h: ";
    cin >> velocidad_kmh;

    velocidad_ms = (velocidad_kmh * 1000) / 3600;

    cout << "La velocidad en m/s es: " << velocidad_ms << endl;

    return 0;
}

