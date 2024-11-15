#include <iostream>
using namespace std;

int main() {
    int numeroAlumnos;
    float edad, sumaEdades = 0, promedio;

    cout << "Introduce el numero de alumnos: ";
    cin >> numeroAlumnos;

    if (numeroAlumnos <= 0) {
        cout << "El numero de alumnos debe ser mayor que cero." << endl;
    } else {
      
        for (int i = 1; i <= numeroAlumnos; i++) {
            cout << "Introduce la edad del alumno " << i << ": ";
            cin >> edad;
            sumaEdades = sumaEdades + edad;
        }

        promedio = sumaEdades / numeroAlumnos;

        cout << "La edad promedio del grupo es: " << promedio << endl;
    }

    return 0;
}

