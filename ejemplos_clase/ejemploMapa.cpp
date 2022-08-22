/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>

using namespace std;

class Estudiante{
    public:
    Estudiante(int id, int edad, float promedio){
        this->id = id;
        this->edad = edad;
        this->promedio = promedio;
    }
    
    int id;
    int edad;
    float promedio;
};

int main()
{
    // empty map container
    map<int, Estudiante*> identificadores;
  
    // insert elements in random order
    identificadores[0] = new Estudiante(0, 25, 4.5);
    identificadores[1] = new Estudiante(1, 15, 3.7);
    identificadores[2] = new Estudiante(2, 35, 4.2);
    
    for (auto i : identificadores) {
        cout << "nota Estudiante " << i.first + 1 << " = " << i.second->promedio << endl;
    }

    return 0;
}

/*
Salida del programa
nota Estudiante 1 = 4.5
nota Estudiante 2 = 3.7
nota Estudiante 3 = 4.2
*/