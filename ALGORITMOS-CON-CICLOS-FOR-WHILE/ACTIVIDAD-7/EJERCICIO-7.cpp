#include <iostream>
using namespace std;

int main() {
    int N, cantidad, menoresOIgualesACero = 0, mayoresACero = 0;

    cout << "Ingrese la cantidad de n�meros a evaluar: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Ingrese el n�mero " << i << ": ";
        cin >> cantidad;

        if (cantidad <= 0) {
            menoresOIgualesACero++;
        } else {
            mayoresACero++;
        }
    }
    
    cout << "Cantidad de n�meros menores o iguales a cero: " << menoresOIgualesACero << endl;
    cout << "Cantidad de n�meros mayores a cero: " << mayoresACero << endl;

    return 0;
}

