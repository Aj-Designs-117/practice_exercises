#include <iostream>
using namespace std;

int main() {
 	int cantidad;    
    double precio;   
    double total; 

    cout << "Ingrese la cantidad de l�pices: ";
    cin >> cantidad;

    if (cantidad >= 1000) {
        precio = 0.85; 
    } else {
        precio = 0.90;
    }

    total = cantidad * precio;

    cout << "El total a pagar por " << cantidad << " l�pices es: $" << total << endl;
    return 0;
}
