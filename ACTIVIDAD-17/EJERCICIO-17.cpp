#include <iostream>
using namespace std;

int main() {
   	int anioNacimiento, anioActual, edad;

    cout << "Ingrese el a�o actual: ";
    cin >> anioActual;

    cout << "Ingrese el a�o de nacimiento: ";
    cin >> anioNacimiento;

    // Calcular la edad
    edad = anioActual - anioNacimiento;

    cout << "La edad de la persona es aproximadamente: " << edad << " a�os" << endl;
    
    return 0;
}


