#include "iostream"
using namespace std;

int main()
{
    int  edades[50],n,i;
    float prom,suma;
    cout<<endl;
    cout<<"promedio de edades "<<endl;
    cout<<"cuantas edades va a promediar "<<endl;
    cin>>n;

    
    
        cout<<"digite las n edades "<<endl;
        for(i=0;i<n;i++)   
        cin>> edades[i];
        suma=0;
    
    
        for(i=0;i<n;i++)
        {
        suma=suma+edades[i];
        cout<<"la suma de los elementos del arreglo son "<<suma<<" "<<endl;
        prom=suma/n;
        cout<<"el promedio de edades es "<<prom<<" "<<endl;

        }
    
    
}