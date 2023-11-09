#include<iostream>
#include<string>
using namespace std;
// Establecer la clase "Estudiante"
class Estudiante {
private:
    string nombre;
    int edad;
    string grado;
//Propiedadesdel estudiante
public:
    Estudiante() {
        nombre = "";
        edad = 0;
        grado = "";
    }

    //Funcion para obtener los datos del estudiante
    void obtener_informacion(std::string nombre, int edad, std::string grado) {
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }

//Funcion para mostrar la informacion al usuario
    void mostrar_informacion() {
        cout << "Nombre:" << nombre << std::endl;
        cout << "Edad:" << edad << "años" << std::endl;
        cout << "Grado:" << grado << std::endl;

    }
};
int main() {

    Estudiante estudiante;
    string nombre;
    int edad;
    string grado;
//Solicitar los datos del estudiante al usuario
    cout<<"Escriba en nombre del estudiante:";
    std:: cin >> nombre;
    cout<<"Escriba la edad del estudiante:";
    cin>>edad;
    cin.ignore();
    cout<<"Escriba el grado del estudiante:";
    std::cin >>grado;
    estudiante.obtener_informacion(nombre,edad,grado);
//Materias del estudiante
    estudiante.mostrar_informacion();
    int materias_registradas [10];
    cout<<"Escriba el nombre de las materias: ";
    cin>>materias_registradas[10];
    *materias_registradas=;
    cout<<"materias deseadas: "<<materias_registradas[10]<<endl;
    return 0;



}
