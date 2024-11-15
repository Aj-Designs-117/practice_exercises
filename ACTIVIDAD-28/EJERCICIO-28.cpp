#include <iostream>
using namespace std;

int main() {
   	double A, B, C;

    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;
    cout << "Ingrese el valor de C: ";
    cin >> C;

    if (A >= B && A >= C) {
        cout << "El mayor es A, con el valor: " << A << endl;
    }
    else if (B >= A && B >= C) {
        cout << "El mayor es B, con el valor: " << B << endl;
    }
    else {
        cout << "El mayor es C, con el valor: " << C << endl;
    }

    return 0;
}
