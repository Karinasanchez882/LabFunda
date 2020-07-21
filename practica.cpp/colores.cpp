#include "iostream"
#include "string.h"
#include "string"

using namespace std;
int main()
{
    int rojo=27, azul=10, verde=5, morado=8;
    string color;
    cout<<endl;
    cout<<"BIENVENIDO AL JUEGO ";
    cout<<endl;
    cout<<"LISTA DE COLORES"<<endl;
    cout<<"rojo"<<endl;
    cout<<"azul"<<endl;
    cout<<"verde"<<endl;
    cout<<"morado"<<endl;
    cout<<"por favor introduzca un color que este dentro de la lista"<<endl<<endl;
    cout<<"cual es el color que introducira de la lista? "<<endl;
    cin>>color;

    if( color ==  "rojo")
    {
      cout<<"su color cuesta :$"<<rojo<<" "<<endl;
    }

    else if (color == "azul")
    {
        cout<<"su color cuesta :$"<<azul<<" ";
    }
    
    else if (color ==  "verde")
    {
        cout<<"su color cuesta :$"<<verde<<" ";
    }

    else
    {
        cout<<"su color cuesta :$"<<morado<<" ";
    }

    cout<<endl;
    cout<<"GRACIAS POR USAR NUESTROS SERVICIOS "<<endl;
    cout<<"FIN DEL JUEGO DE COLORES "<<endl;
    

}