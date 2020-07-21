#include "iostream"
using namespace std;
int funcion(int arreglo[100], int n)
{
  int i=0;
  for(int i=99; i >=1; i--)
  {
    arreglo[i]=n--;
    
      if(arreglo[i]%2==1)
      {
        cout<<arreglo[i]<<" ";
      }
  }
}

int main()
{
  int arreglo[100],n=99;
  cout<<endl;
  cout<<"BIENVENIDO AL CALCULO DE NUMEROS"<<endl<<endl;
  cout<<"Los numeros impares  entre el rango de 1 a 100 son : "<<endl;
  cout<<funcion(arreglo,n)<<endl;
}