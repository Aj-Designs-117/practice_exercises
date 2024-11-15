#include <iostream>
using namespace std;

int main() {
    double R, H, area, volumen;

    cout << "Introduce el radio del cilindro (R): ";
    cin >> R;
    cout << "Introduce la altura del cilindro (H): ";
    cin >> H;

    area = 2 * 3.1416 * R * (R + H);

    volumen = 3.1416 * R * R * H;

    cout << "El área del cilindro es: " << area << std::endl;
    cout << "El volumen del cilindro es: " << volumen << std::endl;

    return 0;
}

