#include <iostream>
using namespace std;

int main() {
   	double precioOriginal, precioConDescuento, precioFinal, descuento, IVA;

    cout << "Ingrese el precio original del artículo: ";
    cin >> precioOriginal;

    descuento = precioOriginal * 0.20;
    precioConDescuento = precioOriginal - descuento;

    IVA = precioConDescuento * 0.15;
    precioFinal = precioConDescuento + IVA;

    cout << "El precio con descuento es: $" << precioConDescuento << endl;
    cout << "El precio final con IVA es: $" << precioFinal << endl;

    return 0;
}

