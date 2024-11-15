#include <iostream>
#include <cmath>
using namespace std;

int main() {
   	float A, B, C, semiPerimetro, area;

    cout << "Ingrese el lado A del terreno: ";
    cin >> A;

    cout << "Ingrese el lado B del terreno: ";
    cin >> B;

    cout << "Ingrese el lado C del terreno: ";
    cin >> C;

    semiPerimetro = (A + B + C) / 2;

    area = sqrt(semiPerimetro * (semiPerimetro - A) * (semiPerimetro - B) * (semiPerimetro - C));

    cout << "El área del terreno es: " << area << " metros cuadrados." << endl;

    return 0;
}

