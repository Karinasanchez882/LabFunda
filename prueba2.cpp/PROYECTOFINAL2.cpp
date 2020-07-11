#include "iostream"
#include "string"
#include "string.h"

const int longcad=20;

using namespace std;
struct costoporarticulo{   
char nombrearticul[ longcad + 1 ];
int cantidad;
float precio;
float costoporarticulo;
};

void leer()
{
    int pre,cantidad,costo;
    cout<<"introduzca la cantidad de cada producto :";
    cin>>cantidad;
    cout<<"introduzca el precio del producto :";
    cin>>pre;
    cout<<"el costo del producto es :"<<costo<<" ";
    costo=pre*cantidad;

}

void costo()
{
    
    int cos,cantidad,pre;
    cout<<"el costo por el articulo es :";
    cos=pre*cantidad;

}


int main()
{
    string cantidad[10];
    int n;
    cout<<"ingrese";
    cin>>n;
    cin.ignore(100,'\n');
      
    for(int i=0;i<n;i++)
    {

        cout<<"ingrese nombre de productos :";
        cin>>cantidad[i];
    }

    leer();
}