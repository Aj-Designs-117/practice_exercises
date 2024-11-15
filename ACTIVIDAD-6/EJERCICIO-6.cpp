#include <iostream>
using namespace std;

int main() {
	float radio, PI = 3.1416, areaCircuferencia;
		
	cout << "Ingrese el radio del circulo: ";
	cin >> radio;
	
	areaCircuferencia = PI * radio * radio;
	
	cout << "El area de la circuferencia es: " << areaCircuferencia <<endl;
   

    return 0;
}

