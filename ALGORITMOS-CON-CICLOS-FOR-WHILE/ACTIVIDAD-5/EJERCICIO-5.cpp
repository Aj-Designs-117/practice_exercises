#include <iostream>
using namespace std;

int main() {
    int numeroPersonas;
    float estatura, sumaEstaturas = 0.0, promedio;

    cout << "¿Cuántas personas hay en el grupo? ";
    cin >> numeroPersonas;

    if (numeroPersonas <= 0) {
        cout << "El número de personas debe ser mayor que 0." << endl;
        return 1; 
    }

    for (int i = 1; i <= numeroPersonas; i++) {
        cout << "Ingresa la estatura de la persona #" << i << ": ";
        cin >> estatura;

        sumaEstaturas = sumaEstaturas + estatura;
    }

    promedio = sumaEstaturas / numeroPersonas;

    cout << "La estatura promedio del grupo es: " << promedio << " metros." << endl;

    return 0;
}

