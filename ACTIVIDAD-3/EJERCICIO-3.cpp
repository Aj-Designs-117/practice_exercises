#include <iostream>
using namespace std;

int main() {
   float disenoComputadora, algebra, cinematica, disenoEstructuras, programacion, promedioTotal;

	cout << "Ingrese la calificacion de diseño por computadora: ";
	cin >> disenoComputadora;
	
	cout << "Ingrese la calificacion de algebra: ";
	cin >> algebra;
	
	cout << "Ingrese la calificacion de cinematica: ";
	cin >> cinematica;
	
	cout << "Ingrese la calificacion de diseño de estructuras: ";
	cin >> disenoEstructuras;
	
	cout << "Ingrese la calificacion de programacion: ";
	cin >> programacion;
	
	promedioTotal = (disenoComputadora + algebra + cinematica + disenoEstructuras + programacion) / 5;
	
	cout << "El promedio del alumno es: " << promedioTotal << endl;
	
    return 0;
}
