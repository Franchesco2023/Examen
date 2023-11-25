//Prougram: arreglo
//Autor: Casierra Franchesxo
//Fexha: 24-11-23

#include <iostream>
using namespace std;
int main() {
    int nmro[5];
    int sunm = 0;
    int i = 0;
    do {
        cout << "Digite el valor para el elemento " << i + 1 << ": ";cin >> nmro[i];              sunm = sunm +nmro[i];i++;
    } while (i < 5);
    cout << "La suma de los elementos del arreglo va ser: " << sunm << endl;
    return 0;
}
