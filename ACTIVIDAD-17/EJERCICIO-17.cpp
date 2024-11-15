#include <iostream>
using namespace std;

int main() {
   	int anioNacimiento, anioActual, edad;

    cout << "Ingrese el año actual: ";
    cin >> anioActual;

    cout << "Ingrese el año de nacimiento: ";
    cin >> anioNacimiento;

    // Calcular la edad
    edad = anioActual - anioNacimiento;

    cout << "La edad de la persona es aproximadamente: " << edad << " años" << endl;
    
    return 0;
}


