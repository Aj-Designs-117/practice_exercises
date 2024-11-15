#include <iostream>
using namespace std;

int main() {
   	double cantidadPesos, tipoCambio, cantidadDolares;

    cout << "Ingrese la cantidad en pesos mexicanos: ";
    cin >> cantidadPesos;

    cout << "Ingrese el tipo de cambio: ";
    cin >> tipoCambio;

    cantidadDolares = cantidadPesos / tipoCambio;

    cout << "Con " << cantidadPesos << " pesos mexicanos, puedes adquirir aproximadamente ";
    cout << cantidadDolares << " dólares" << endl;

    return 0;
}


