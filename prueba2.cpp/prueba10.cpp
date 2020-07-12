#include "iostream"
#include "string"
#include  "string.h"

const int longcad=20;//longitud maxima de la cadena

using namespace std;

struct costoporarticulo{ //estructura que contiene los datos
    char nombreArticul[longcad + 1]; 
    int cantidad;
    float producto1;
    float precio;
    float costoporarticulo;
    
};

  void mostrar() //funcion mostrar 
 {
    int n,i,cantidad;
    cout<<endl;
    cin.ignore(100,'\n');
    costoporarticulo listado[n];
    
     cout<<"los datos del arreglo son: "<<endl;
      for(i=0;i<n;i++)
     {
        cout<<listado[i].nombreArticul<<endl;
        cout<<"productos :"<<listado[i].producto1<<endl; 

     }
  }
  void datos() // funcion que calcula nombre,precio de los productos
  {
    string cantidad[100];
    int n,i;
    float precio[100],p,costoporarticulo,cos,pre[100],suma=0;
    cout<<"INGRESE CANTIDAD DE PRODUCTOS A COMPRAR :";
    cin>>n;
      
    for(int i=0;i<n;i++)//recorre el nombre de los productos
    {
        cout<<"ingrese nombre de productos :";
        cin>>cantidad[i];    
    }

    cout<<"INGRESE LA CANTIDAD DE PRODUCTOS COMPRADOS :";
    cin>>p;
    for(int i=0;i<p;i++) // iteracion que pide el ingreso de precio de productos
    {
      cout<<"ingrese precio de productos :";
      cin>>precio[i];  
    }

    cout<<"INGRESE EL TOTAL DE PRODUCTOS COMPRADOS :";
    cin>>p;
    for(int i=0;i<p;i++)
    {
      cout<<"ingrese cantidad comprada de cada producto en forma descendente :";
      cin>>pre[i]; 
    }

    for(int i=0;i<n;i++)//calcula la cantidad de productos con el precio
    {
       costoporarticulo = pre[i] * precio[i];
       cout<<"el costo por articulo es :"<<costoporarticulo<<" "<<endl;
    }
    
    for(int i=0; i<1; i++){
    cos = pre[i] * precio[i] + costoporarticulo ; 
    cout<<"LA SUMA TOTAL ES :"<<cos<<" "; 
    }
    
  }
  
  void costo()
  {
    float cos;
     cout<<"el costo total es :"<<cos<<" "<<endl;
  }
int main()//funcion principal main 
{
    string cad;
    int n,i;
    cout<<endl;
    cout<<"BIENVENIDO A NUESTROS SERVICIOS"<<endl;
    cout<<"FACTURA"<<endl;
    cout<<"cantidad de facturas a realizar"<<endl;
    cin>>n;
    cin.ignore(100,'\n');
    costoporarticulo listado[n];
    for(i=0;i<n;i++)
    {
        cout<<"nombre cliente :";
        getline(cin,cad,'\n');//para uso de cadenas
        strncpy(listado[i].nombreArticul,cad.c_str(),longcad);
          listado[i].nombreArticul[longcad]='\0';
          cout<<"cantidad a comprar: ";
          cin>>listado[i].producto1;
          cin.ignore(100,'\n');
    }

   datos();  //llama a la funcion datos 
   costo(); //llama funcion costo
   mostrar(); //llama funcion mostrar

}

  
