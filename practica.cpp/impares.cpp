#include "iostream"
using namespace std;

void funcion(int arreglo[199],int n)
{
    
    for(int arreglo=199;arreglo>n;arreglo-=2)
    { 
       cout<<arreglo<<" ";
    }
}

int main()
{
  int arreglo[199],n=0;
  cout<<endl;
  cout<<"BIENVENIDO AL MUNDO DE LAS MATEMATICAS"<<endl<<endl;
  cout<<"LOS NUMEROS IMPARES SON :"<<endl;
  funcion(arreglo,n);
}

