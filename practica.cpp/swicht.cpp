#include "iostream"
using namespace std;
int main()
{
    int rojo=20,azul=10;
    float verde=8.80;
    cout<<endl;
    cout<<"BIENVENIDO AL JUEGO "<<endl;
    cout<<"por favor introduzca una opcion de la LISTA"<<endl;
    cout<<"LISTA DE COLORES"<<endl;
    cout<<"1)rojo  ";
    cout<<" 2)verde  ";
    cout<<" 3)azul  ";
    cout<<endl;
    cout<<"ingrese la opcion a elegir :"<<endl;
    int  opcion = 0;
    cin>>opcion;
    switch(opcion)
    {
        case 1:cout<<"su color cuesta $ "<<rojo<<" ";
        break;
        case 2: cout<<"su color le recuerda que le debe a cesar una cantidad de $ "<<verde<<" en recargas ";
        break;
        case 3: cout<<"su color cuesta $ "<<azul<<" ";
        break;
        default: cout<<"usted a ingresado una opcion incorrecta ";
    }
    
    cout<<endl;
    cout<<"FELIZ DIA :)  "<<endl;
    return 0;
}