#include <iostream>
using namespace std;

int main() {
    char tipo_uva;
    int tamano_uva;
    double precio_inicial, kilos, precio_final, ganancia;

    cout << "Ingrese el tipo de uva (A o B): ";
    cin >> tipo_uva;
    cout << "Ingrese el tamaño de la uva (1 o 2): ";
    cin >> tamano_uva;
    cout << "Ingrese el precio inicial por kilo de uva: $";
    cin >> precio_inicial;
    cout << "Ingrese la cantidad de kilos de uva entregada: ";
    cin >> kilos;

    if (tipo_uva == 'A' || tipo_uva == 'a') {
        if (tamano_uva == 1) {
            precio_final = precio_inicial + 0.20;
        } else if (tamano_uva == 2) {
            precio_final = precio_inicial + 0.30;
        } else {
            cout << "Tamaño de uva inválido." << endl;
            return 1;
        }
    } else if (tipo_uva == 'B' || tipo_uva == 'b') {
        if (tamano_uva == 1) {
            precio_final = precio_inicial - 0.30;
        } else if (tamano_uva == 2) {
            precio_final = precio_inicial - 0.50;
        } else {
            cout << "Tamaño de uva inválido." << endl;
            return 1;
        }
    } else {
        cout << "Tipo de uva inválido." << endl;
        return 1;
    }

    ganancia = precio_final * kilos;

    cout << "Precio final por kilo: $" << precio_final << endl;
    cout << "Ganancia total por el embarque: $" << ganancia << endl;

    return 0;
}

