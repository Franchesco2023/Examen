//Programa: Positivo, Negativos y cero
//Autor: Casierra Franchesco
//Fecha: 24-11-23


#include <iostream>
using namespace std;
int main() {
    int nmro;

    cout << "Digite un número cualquiera: ";
    cin >> nmro;                                                                          if (nmro > 0) {
        cout << "El número que ha ingreso es positivo." <<endl;
    } else if (nmro < 0) {
        cout << "El número que ha  ingreso es negativo." <<endl;                                 } else {
        cout << "El número que ha ingreso  es cero." <<endl;                                     }
    return 0;
}
