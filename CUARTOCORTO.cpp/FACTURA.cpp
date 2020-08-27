#include "iostream"
#include "conio.h"
#include "string"
#include "string.h"

using namespace std;
const int cad=20;

struct costoporarticulo
{
    char nombrearticulo[cad+1];
    int cantidad;
    float precio;
    float costoporarticulo;

}factura;

void rellenardatos(float costoporarticulo)
{
    char nombrearticulo[cad+1];
    int cantidad;
    int d;
    int precio;
    cout<<"nombre articulo :"<<endl;
    fflush(stdin);
    cin.getline(factura.nombrearticulo,20,'\n');
    cout<<"cantidad :"<<endl;
    cin>>factura.cantidad;
    cout<<"precio :"<<endl;
    cin>>factura.precio;
    cout<<endl;
    
}

void mostrardatos(float costoporarticulo,float d)
{
    cout<<endl<<endl;
    cout<<"DATOS DE LA COMPRA"<<endl<<endl;
    cout<<"FACTURA "<<" "<<endl;
    cout<<"nombre articulo "<<factura.nombrearticulo<<endl;
    cout<<"cantidad :"<<factura.cantidad<<endl;
    cout<<"precio :"<<factura.precio<<endl;
    d=factura.precio * factura.cantidad;
    cout<<"el total de la compra es: "<<d<<" "<<endl;
    cout<<endl;
    
    
}

void calculo(float costoporarticulo,float d)
{
    float k;
    k=0+d;
    cout<<"la suma es"<< k <<endl;
    
}

int main()
{
    int n;
    int cantidad;
    float d;
    int precio;
    char nombrearticulo[cad+1];
    float cos;
    float costoporarticulo;
    float costo;
    float j;
    cout<<endl<<endl;
    cout<<"FACTURA COMERCIAL"<<endl<<endl;
    cout<<"Buenos dias ,por favor introduzca los siguientes datos"<<endl;
    cout<<"ingrese el numero de articulos a llevar"   <<endl;
    cin>>n;
    fflush(stdin);
    for(int i=0;i<n;i++){
    rellenardatos(cos);
    calculo(costo,j);
    mostrardatos(costoporarticulo,d);
    }

    
    return 0;
}
