#include "iostream"
using namespace std;
void solicitar(int a[],int tamano){
    for(int i=0;i<tamano;i++){
        cout<<"digite un numero : ";
        cin>>a[i];
    }
}
void mostrar(int a[],int tamano)
{
    cout<<"muestra numeros ingresados ** : ";
    for(int i=0;i<tamano;i++){
        cout<<a[i]<<" ";
    }
}

void mediana(int a[],int tamano){
    cout<<endl;
    cout<<"la mediana es :"<<a[2]<<" ";
}
int main()
{
    int elementos =5 , numero[elementos];
    cout<<endl;
    cout<<"****CALCULO DE LA MEDIANA*****"<<endl;
    solicitar(numero,elementos);
    mostrar(numero,elementos);
    mediana(numero,elementos);
    return 0;
}