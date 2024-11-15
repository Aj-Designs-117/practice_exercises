#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numeros[] = {2, 20, 200, 2000}, logaritmo;

    cout << "Logaritmos decimales de los números 2, 20, 200 y 2000:" << endl;
    
    for (int i = 0; i < 4; i++) {
        logaritmo = log10(numeros[i]);  
        cout << "Logaritmo decimal de " << numeros[i] << " es: " << logaritmo << endl;
    }
    
    return 0;
}
