#include <iostream>
#include <cmath>
using namespace std;

int main() {
   	double sueldo, ahorro_semanal, ahorro_anual;
    
    cout << "Ingrese su sueldo semanal: ";
    cin >> sueldo;
    
    ahorro_semanal = sueldo * 0.15;

    ahorro_anual = ahorro_semanal * 52;
    
    cout << "El ahorro anual es: $" << ahorro_anual << endl;
    
    return 0;
}


