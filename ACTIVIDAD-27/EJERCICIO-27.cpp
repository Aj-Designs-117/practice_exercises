#include <iostream>
using namespace std;

int main() {
    double A, B;

    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;

    if (A > B) {
        cout << "El mayor es A, con el valor: " << A << endl;
    }
    else if (B > A) {
        cout << "El mayor es B, con el valor: " << B << endl;
    }
    else {
        cout << "Ambos valores son iguales." << endl;
    }

    return 0;
}
