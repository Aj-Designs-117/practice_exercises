#include <iostream>
using namespace std;

int main() {
     double metros_cubicos, tarifa_por_metro, pago;

    cout << "Ingrese el total de metros cúbicos de agua consumidos: ";
    cin >> metros_cubicos;

    cout << "Ingrese la tarifa por metro cúbico de agua: ";
    cin >> tarifa_por_metro;

    pago = metros_cubicos * tarifa_por_metro;

    cout << "El total a pagar por el consumo de agua es: $" << pago << endl;

    return 0;
}


