#include "iostream"
#include "string"
#include "string.h"

const int longcad=20;

using namespace std;
struct costoporarticulo{   
char nombrearticul[longcad+1];
int cantidad;
float precio;
float costoporarticulo;
};

void leer()
{


}

void costo()
{

}

void contenido()
{

}

int main()
{

    char c;
    string cad;
    int n,i;
    cout<<endl,
    cout<<"FACTURA DE PRODUCTOS"<<endl;
    cout<<"ingrese numero de productos : ";
    cin>>n;

    cin.ignore(100 ,'\n');
    costoporarticulo listado[n];
    cout<<"digite los nombre de los articulos comprados ";
    for(i=0; i<n; i++)
    {
        cout<<endl;
        cout<<"nombre : ";
        getline(cin,cad);
        strncpy(listado[i].nombrearticul,cad.c_str(),longcad);
        listado[i].nombrearticul[longcad]='\0';
        cin.ignore(100,'\n');
    }

}