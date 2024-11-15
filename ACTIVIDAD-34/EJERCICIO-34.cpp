#include <iostream>
using namespace std;

int main() {
    int num_alumnos;
    double costo_por_alumno, total_a_pagar;

    cout << "Ingrese el número de alumnos: ";
    cin >> num_alumnos;

    if (num_alumnos >= 100) {
        costo_por_alumno = 65.00;
        total_a_pagar = costo_por_alumno * num_alumnos;
    } else if (num_alumnos >= 50) {
        costo_por_alumno = 70.00;
        total_a_pagar = costo_por_alumno * num_alumnos;
    } else if (num_alumnos >= 30) {
        costo_por_alumno = 95.00;
        total_a_pagar = costo_por_alumno * num_alumnos;
    } else {
        costo_por_alumno = 4000.00 / num_alumnos;
        total_a_pagar = 4000.00;
    }

    cout << "Pago total a la compañía de autobuses: $" << total_a_pagar << endl;
    cout << "Costo por alumno: $" << costo_por_alumno << endl;

    return 0;
}

