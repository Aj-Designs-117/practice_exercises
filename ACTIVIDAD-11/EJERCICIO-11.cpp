#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;

    std::cout << "Introduce la longitud del primer cateto (A): ";
    std::cin >> A;
    std::cout << "Introduce la longitud del segundo cateto (B): ";
    std::cin >> B;

    C = sqrt((A * B) + (B * B));
    
    cout << "La hipotenusa del triángulo es: " << C << endl;

    return 0;
}

