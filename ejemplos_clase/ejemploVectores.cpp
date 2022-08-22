#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Estudiante{
    public:
    Estudiante(int id, int edad, float promedio, string nombre=""){
        this->id = id;
        this->edad = edad;
        this->promedio = promedio;
        this->nombre = nombre;
    }
    
    int id;
    int edad;
    float promedio;
    string nombre;
};

int main()
{
    vector<Estudiante*> grupo1;
    
    grupo1.push_back(new Estudiante(0, 25, 4.5, "Est 1"));
    grupo1.push_back(new Estudiante(1, 15, 3.7, "Est 2"));
    grupo1.push_back(new Estudiante(2, 35, 4.2, "Est 3"));
    
    int count = 0;
    for (auto i : grupo1) {
        cout << "El estudiante " << grupo1[count]->nombre << " del grupo " << grupo1[count]->id << " tiene una nota promedio de " <<  grupo1[count]->promedio << endl;
        count++;
    }

    return 0;
}