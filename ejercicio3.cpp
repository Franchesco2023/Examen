//Programa: Tabla de multiplicar
//Autor: Casierra Franchesco
//Fecha: 24-11-23

#include <iostream>
using namespace std;
int main() {
    int nmro;
    cout << "Digite el número para poder mostrar la tabla de multiplicar: ";                     cin >> nmro;
    cout << "Tabla de multiplicar del " << nmro << ":" << endl;
    int i = 1;
    do {   cout << nmro<< " x " << i << " = " << nmro * i << endl; i++;
    } while (i <= 10);

    return 0;
}
