#include <iostream>
using namespace std;

int main() {
    double precio, descuento, precio_final;

    cout << "Ingrese el precio del traje: $";
    cin >> precio;

    if (precio > 2500.00) {
        descuento = precio * 0.15;
    } else {
        descuento = precio * 0.08;
    }

    precio_final = precio - descuento;

    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Precio final a pagar: $" << precio_final << endl;

    return 0;
}

