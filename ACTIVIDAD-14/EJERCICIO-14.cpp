#include <iostream>
using namespace std;

int main() {
    double metros, pulgadas;

    cout << "Ingrese la cantidad de tela en metros: ";
    cin >> metros;

    pulgadas = metros / 0.0254;

    cout << "La cantidad de tela en pulgadas es: " << pulgadas << endl;

    return 0;
}

