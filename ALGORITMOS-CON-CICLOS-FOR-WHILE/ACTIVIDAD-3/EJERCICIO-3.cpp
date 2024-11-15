#include <iostream>
using namespace std;

int main() {
    int cantidad, suma = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Introduce la cantidad " << i << ": ";
        cin >> cantidad;
        suma = suma + cantidad;
    }

    cout << "La suma de las diez cantidades es: " << suma << endl;

    return 0;
}

