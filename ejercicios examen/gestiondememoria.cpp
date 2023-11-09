#include<iostream>

//Funcion de interamcio
void intercambio (int *a, int*b){
    //Definir variable auxiliar
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
int main(){
    int num1=8;
    int num2=10;
    //Imprimir valores iniciales
    std::cout<<"Valores iniciales:num1=" <<num2<<std ::endl;
    int *ptr1=&num1;
    int *ptr2=&num2;
    //Lamar a la funcion intrcambio
    intercambio(ptr1,ptr2);
    std::cout<<"Valores finales num 1=:"<<num1<< "num2="<<num2<<std::endl;
    return 0;


}
