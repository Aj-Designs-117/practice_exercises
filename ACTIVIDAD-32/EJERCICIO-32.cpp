#include <iostream>
using namespace std;

int main() {
    int personas;
    double costo_por_persona, presupuesto;

    cout << "Ingrese el número de personas para el evento: ";
    cin >> personas;

    if (personas > 300) {
        costo_por_persona = 75.00;
    } else if (personas > 200) {
        costo_por_persona = 85.00;
    } else {
        costo_por_persona = 95.00;
    }

    presupuesto = personas * costo_por_persona;

    cout << "El presupuesto total es: $" << presupuesto << endl;

    return 0;
}

