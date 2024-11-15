#include <iostream>
using namespace std;

int main() {
 	string nombre;  
    int anoNacimiento;   
    int edad;            
    int anoActual;      

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su año de nacimiento: ";
    cin >> anoNacimiento;

    anoActual = 2024; 

    edad = anoActual - anoNacimiento;

    if (edad >= 18) {
        cout << nombre << " es mayor de edad." << endl;
    } else {
        cout << nombre << " es menor de edad." << endl;
    }
    return 0;
}
