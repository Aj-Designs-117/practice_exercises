#include <iostream>
using namespace std;

int main() {
    string descripcion;
    float costoPorCaja, precioUnitarioVenta;
    const float IVA = 0.16;

    cout << "Ingrese la descripción del producto: ";
    cin >> descripcion;

    cout << "Ingrese el costo por caja del producto: ";
    cin >> costoPorCaja;

    precioUnitarioVenta = (costoPorCaja / 10) * (1 + IVA);

    cout << "Descripción: " << descripcion << endl;
    cout << "Precio de venta (incluyendo IVA): $" << precioUnitarioVenta << endl;

    return 0;
}

