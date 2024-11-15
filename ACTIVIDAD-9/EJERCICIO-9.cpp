#include <iostream>
#include <cmath>
using namespace std;

int main() {
  	float H, R, altura, areaTriangulo, areaCircuferencia, areaTotal;

    cout << "Ingrese el valor de H: ";
    cin >> H;
    
    cout << "Ingrese el valor de R: ";
    cin >> R;
    
    altura = sqrt(pow(H,2) - pow(R,2));
    areaTriangulo = ((R * altura) / 2) * 2;
    areaCircuferencia = (3.1416 * pow(R,2)) / 2;

    areaTotal = areaTriangulo + areaCircuferencia;

    cout << "El área total del terreno es: " << areaTotal << " metros cuadrados" << endl;

    return 0;
}

