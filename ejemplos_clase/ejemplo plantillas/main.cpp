/*! \file main.cpp
 *  \brief Ejemplo 5: Creación de una pila de almacenamiento
*/
#include <iostream>
#include "tpila1.h"

using namespace std;

int main()
{
    Pila< double > pilaDouble(5);
    double d = 1.1;
    cout << "Colocando elementos en la pilaDouble" << endl;
    try {

        while (true) {
            if(pilaDouble.push(d)){
                cout << d << " ";
                d += 1.1;
            }
            else {
                throw out_of_range("Pila<>::push(): Pila llena");
            }
        }

    } catch (exception const& ex) {
        cerr << "\nException: " << ex.what() <<endl;
    }

    cout << "\nLa pila esta llena\n" << endl;
    cout << "\nSacando elementos de la pila" << endl;

    while (pilaDouble.pop(d)) {
        cout << d << " ";
    }
    cout << "\nLa pila esta vacia\n" << endl;

    Pila<int> pilaInt;
    int i = 1;
    cout << "Colocando elementos en la pilaInt" << endl;

    while (pilaInt.push(i)) {
        cout << i << " ";
        ++i;
    }

    cout << "\nLa pila esta llena\n" << endl;
    cout << "\nSacando elementos de la pila" << endl;

    while (pilaInt.pop(i)) {
        cout << i << " ";
    }
    cout << "\nLa pila esta vacia\n" << endl;

    return 0;
}
