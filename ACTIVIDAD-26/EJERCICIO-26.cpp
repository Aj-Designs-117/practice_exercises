#include <iostream>
using namespace std;

int main() {
    int x; 
    int y;  
    
    cout << "Puntos de la ecuacion y = 2x + 3:" << endl;

    for (x = -2; x <= 2; x++) {
        y = 2 * x + 3; 
        cout << "x = " << x << ", y = " << y << " -> Coordenada: (" << x << ", " << y << ")" << endl;
    }
    return 0;
}
