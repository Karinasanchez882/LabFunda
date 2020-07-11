#include "iostream"
using namespace std;

void mostrararreglo(int arreglo[],int n)
{
    for(int i=0; i<n;i++){
    cout<<arreglo[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int numeroactual=0;
    int contador=0;
    int n=100;

   int arreglo[n];
   while(contador<100)
   {
       if(numeroactual%2 !=0)
       {
           arreglo[contador]=numeroactual;
           contador++;
           numeroactual++;
       }else{
           numeroactual++;
           }
   }
   mostrararreglo(arreglo,n);
}