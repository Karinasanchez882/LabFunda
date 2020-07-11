#include "iostream"
using namespace std;

void leer(int arreglo[],int n)
{
    cout<<"llene el arreglo "<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<"ingrese el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    } 
    cout<<endl;
    cout<<"arreglo llenado con exito "<<endl;

}
void sumararreglo(int arreglo1[],int arreglo2[],int n, int arreglo3[])
{
    for(int i=0;i<n;i++)
    {
       arreglo3[i]= arreglo1[i]+arreglo2[i];
    }
}

void mostrararreglo(int arreglo[],int n)
{
    cout<<"[";
    for(int i=0,i<n;i++)
    {
        cout<<arreglo[i]<<endl;
    }
    cout<<"]";
    cout<<endl;
}

int main()
{
    int n;
    cout<<"ingrese el tamaño de los arreglo :" ;
    cin>>n;
    
}

