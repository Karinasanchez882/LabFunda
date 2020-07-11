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

void leer(){
 
    int n,i=0;
    string nombrearticul;
    cout<<"ingrese la cantidad de articulos :";
    cin>>n;
    int cantidad[n];  
    for(int i=0;i<n;i++)
    {
      cout<<"introduzca el nombre del articulo "<<i+1<<": "<<endl;
      cin>>cantidad[i];
    }
   
}

void costo()
{

  cout<<endl;
  cout<<"el costo por articulo es :"<<endl;

}


int main()
{
  int cantidad;

  cout<<endl;
  cout<<"FACTURAS"<<endl;
  cout<<"bienvenido a nuestro centro de servicio:"<<endl;


  leer();
  costo();

}
