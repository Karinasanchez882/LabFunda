#include "iostream"
using namespace std;
int main()
{
    int n, res=98;
    
    cout<<endl;
    cout<<"EL NUMERO MAGICO"<<endl;

    cout<<"BIENVENIDO AL JUEGO, PREPARATE PARA UNA AVENTURA"<<endl;
    cout<<endl;
    cout<<"ADVERTENCIA SOLO TIENES CINCO INTENTOS"<<endl;
    cout<<"por favor ingresa un numero"<<endl;
    cout<<"quieres una pista : escoge entre el rango de 1 y 100"<<endl;
    cout<<"SUERTE!"<<endl;
    cin>>n;
    if(n>=1 && n<=20)
    {
cout<<"OH NO!sigue intentando con otro numero : tu numero es menor al indicado"<<endl;
    }

    else if(n>=20 && n<=40)//condicion de segundo intento
    {
        cout<<"OH NO!sigue intentando con otro numero : tu numero sigue siendo menor"<<endl;
    }

    else if(n>=40 && n<=60)//condicion tercero intento
    {
        cout<<"OH NO!sigue intentando :no has llegado aun falta un poco"<<endl;
    }

else if( n>=60 && n<=80)//condicion cuarto intento
{
    cout<<"sigue intentado : falta poco campeon"<<endl;

}

else if(n>=80 && n<=100)//condicion quinto intento
{
    
    cout<<"FELICIDADES CAMPEON ERES LO MAXIMO! GANASTE : el numero era: "<<res<<" " <<endl;

}

else // no se da el rango o las demas condiciones 
{
    cout<<"!OH NO , NO HAS INGRESADO UN NUMERO CORRECTO"<<endl;
}

cout<<"si quieres salir del juego amiguito:presiona la opcion salir"<<endl; //indicacion que puede salir

}