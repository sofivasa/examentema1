#include<iostream>
#include<string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    string grado;

public:
    Estudiante (){
    nombre="";
    edad=0;
    grado="";
    }
    void obtener_informacion (std::string nombre,int edad, std::string grado) {
        this->nombre=nombre;
        this->edad=edad;
        this->grado=grado;
    }

        void mostrar_informacion() {
        cout << "Nombre:" << nombre << std::endl;
        cout << "Edad:" << edad << "años" << std::endl;
        cout << "Grado:" << grado << std::endl;
    }


