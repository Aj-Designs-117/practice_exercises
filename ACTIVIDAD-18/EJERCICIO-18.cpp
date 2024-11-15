#include <iostream>
using namespace std;

int main() {
   	double distancia, velocidad, tiempo;

    cout << "Ingrese la distancia entre las ciudades (en km): ";
    cin >> distancia;

    cout << "Ingrese la velocidad constante de la bicicleta (en km/h): ";
    cin >> velocidad;

    if (velocidad == 0) {
        cout << "La velocidad no puede ser cero." << endl;
    } else {
        tiempo = distancia / velocidad;
        cout << "El tiempo estimado de viaje es: " << tiempo << " horas." << endl;
    }
    return 0;
}


