#include <iostream>
using namespace std;

int main() {
    float litrosProducidos, precioPorGalon, totalAPagar;
    const float litrosPorGalon = 3.785; 

    cout << "Ingrese la cantidad de litros producidos: ";
    cin >> litrosProducidos;

    cout << "Ingrese el precio por gal�n: ";
    cin >> precioPorGalon;

    totalAPagar = (litrosProducidos / litrosPorGalon) * precioPorGalon;

    cout << "El total a recibir por la producci�n es: $" << totalAPagar << endl;

    return 0;
}

