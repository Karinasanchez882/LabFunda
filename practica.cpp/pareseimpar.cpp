#include "iostream"
using namespace std;
int pares=0, impares=0;
void aumentarvariables(int unnumero){
    if( unnumero % 2 == 0)
    pares++;
    else
    impares++;
}

int main()
{
    bool continuar = true;
    do{
        int numero = 0;
        cout<<endl;
        cout<<"*** BIENVENIDO AL MUNDO DE LAS MATEMATICAS ***"<<endl;
        cout<<"digite un numero :";
        cin>>numero;
        aumentarvariables(numero);
        cout<<"Pares "<<pares<<endl;
        cout<<"Impares "<<impares<<endl;
        char  opcion=0;
        cout<<endl;
        cout<<"Desea salir (y/n) ? " ;
        cin>>opcion;
        if (opcion=='y')
        continuar=false;
    }while(continuar);
    return 0;
}