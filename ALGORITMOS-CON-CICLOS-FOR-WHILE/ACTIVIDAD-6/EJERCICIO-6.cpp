#include <iostream>
using namespace std;

int main() {
    float depositoMensual, totalAhorrado = 0.0, ahorroMensual;
    
    cout << "Este programa calcula cu�nto ahorrar�s en un a�o considerando dep�sitos mensuales." << endl;
    
    for (int mes = 1; mes <= 12; mes++) {
        cout << "Mes " << mes << ": ";
        cout << "Ingresa la cantidad ahorrada en este mes: ";
        cin >> depositoMensual;
        
        totalAhorrado += depositoMensual;
        
        cout << "Al final del mes " << mes << ", llevas ahorrado: " << totalAhorrado << endl;
    }
    
    cout << "Al final del a�o, has ahorrado un total de: " << totalAhorrado << endl;
    
    return 0;
}

