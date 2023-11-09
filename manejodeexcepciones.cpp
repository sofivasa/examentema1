#include<iostream>
#unclude<stdexcept>
using namespace std;
//Funcion
void lanza_excepcion (){
    throw runtime_eror("error en la funcion de excepcion)
}

int main (){
    //Llamar a la funcion lanza excepcion
    try {
        lanza_excepcion();
    }
    //Captura la excepcion
    cath (runtime_error &e){
        cout<<e.what()<<endl;
    }
    
    return 0;
}