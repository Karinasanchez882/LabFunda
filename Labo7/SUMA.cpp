#include "iostream"
using namespace std;
int funcion(int arreglo1[ 2 ],int arreglo2[ 2 ],int suma[ 2 ],int i)
{

    for(i=0; i<2; i++)
    {
        cout<<"introduzca un numero de la posicion  : "<<i  
        <<" del primer arreglo : ";
        cin>>arreglo1[ i ];
    }
    
    for(i=0; i<2; i++)
    {
    cout<<"introduzca un numero de la posicion :  "<<i
    <<" del segundo arreglo : ";
        cin>>arreglo2[ i ];
    }

    for(i=0 ; i<2 ; i++)
    {
        suma[ i ]=arreglo1[ i ] + arreglo2[ i ];


    }


        cout<<"la suma es: ";
        for(i=0; i<2; i++)
        cout<<suma[ i ]<<" ";

    
}

int main()

{
    int arreglo1[ 2 ];
    int arreglo2[ 2 ];
    int suma[ 2 ];
    int i;

   cout<<"SUMA DE VALORES DE ARREGLOS"<<endl;
   cout<<"POR FAVOR INTRODUZCA NUMEROS ENTEROS: "<<endl;
   cout<<funcion(arreglo1,arreglo2,suma,i)<<endl;
}