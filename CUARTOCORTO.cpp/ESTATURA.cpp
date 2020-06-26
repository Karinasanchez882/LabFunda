#include "iostream"
using namespace std;
void funcion(){

float estatura[25],suma=0;
float  promedio;
 
    for(int i=0; i<25;i++)
    {
        do{
            cout<<"ingrese estatura : "<<i+1<<endl;
            cin>>estatura[i];
        }
        while (estatura[i]<0 && estatura[i]<20);
        suma=suma+estatura[i];//suma
    }
         promedio=suma/25;//division de la suma entre los 25 estaturas
         promedio=1.0*suma/25;//calculo del promedio float
         cout<<"el promedio es : "<<promedio<<endl;//muestra promedio
}

int main()
{
 cout<<endl;
 cout<<"CALCULO DE ESTATURA "<<endl;
 funcion();//llama a la funcion
 cout<<"GRACIAS POR USAR NUESTROS SERVICIOS"<<endl;
}



