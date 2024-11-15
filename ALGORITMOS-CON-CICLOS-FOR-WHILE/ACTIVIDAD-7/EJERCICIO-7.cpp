#include <iostream>
using namespace std;

int main() {
    int N, cantidad, menoresOIgualesACero = 0, mayoresACero = 0;

    cout << "Ingrese la cantidad de números a evaluar: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> cantidad;

        if (cantidad <= 0) {
            menoresOIgualesACero++;
        } else {
            mayoresACero++;
        }
    }
    
    cout << "Cantidad de números menores o iguales a cero: " << menoresOIgualesACero << endl;
    cout << "Cantidad de números mayores a cero: " << mayoresACero << endl;

    return 0;
}

