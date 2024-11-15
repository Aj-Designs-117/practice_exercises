#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;  
    double fx; 
    int start = -3;  
    int end = 3;    
    int step = 1;  

    cout << "Puntos de la gr�fica de la funci�n f(x) = e^x:" << endl;
    
    for (x = start; x <= end; x += step) {
        fx = exp(x);
        cout << "f(" << x << ") = e^" << x << " = " << fx << endl;
    }
    return 0;
}
