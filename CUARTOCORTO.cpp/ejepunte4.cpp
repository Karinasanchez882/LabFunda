#include "iostream"
using namespace std;
int main(){
    char punter[] = "puntero";
    cout<<endl;
    cout<<"******EJERCICIO ULTIMO DE PALABRA PUNTERO *******"<<endl;
    cout<<"posicion: "<<&punter<<"    ";
    cout<<"letra :"<<punter[2]<<"      ";
    cout<<"aumento en 3 : "<<*(punter+3)<<"   ";
    cout<<"letra : "<<punter[4]<<"   ";
    cout<<"letra : "<<punter[5]<<"   ";
    cout<<"letra :  "<<punter[6]<<"  "<<endl;
    cout<<"*****/PROGRAMA FINALIZADO/****";

    return 0;
}