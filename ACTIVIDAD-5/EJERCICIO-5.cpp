#include <iostream>
using namespace std;

int main() {
    string descripcion;
    float costoPorCaja, precioUnitarioVenta;
    const float IVA = 0.16;

    cout << "Ingrese la descripci�n del producto: ";
    cin >> descripcion;

    cout << "Ingrese el costo por caja del producto: ";
    cin >> costoPorCaja;

    precioUnitarioVenta = (costoPorCaja / 10) * (1 + IVA);

    cout << "Descripci�n: " << descripcion << endl;
    cout << "Precio de venta (incluyendo IVA): $" << precioUnitarioVenta << endl;

    return 0;
}

