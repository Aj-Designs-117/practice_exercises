#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    string nombre;
    int claveEmpleado, diasTrabajados;
    float costoPorHora, sueldoQuincenal;

    cout << "Ingrese el nombre del trabajador: ";
    cin >> nombre;

    cout << "Ingrese la clave del trabajador: ";
    cin >> claveEmpleado;

    cout << "Ingrese el número de días trabajados en la quincena: ";
    cin >> diasTrabajados;

    cout << "Ingrese el costo por hora trabajada: ";
    cin >> costoPorHora;

    sueldoQuincenal = diasTrabajados * 8 * costoPorHora;

    cout << "Nombre: " << nombre << endl;
    cout << "Clave de empleado: " << claveEmpleado << endl;
    cout << "Sueldo quincenal: $" << sueldoQuincenal << endl;

    return 0;
}
