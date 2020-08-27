#include "iostream"
#include "conio.h"
#include "string"
#include "string.h"

using namespace std;
const int cad=20;

//estructura
struct costoporarticulo
{
    char nombrearticulo[cad+1];
    int cantidad;
    float precio;
    float costoporarticulo;

}factura[7]; //TAMAÑO MAXIMO DEL ARREGLO PARA LA CANTIDAD DE FACTURAS O ARTICULOS A LLEVAR

//funciones
void rellenardatos(float costoporarticulo,int n);
void mostrardatos(float costoporarticulo,float d,int n);
float calculo(float costoporarticulo,float d,int n);



//FUNCION QUE PIDE DATOS
void rellenardatos(float costoporarticulo,int n)
{
    char nombrearticulo[cad+1];
    int cantidad;
    int d;
    int precio;
    int i;
    
   for(int i=0;i<n;i++)
   {
    cout<<"nombre articulo :"<<endl;
    fflush(stdin);
    cin.getline(factura[i].nombrearticulo,20,'\n');
    cout<<"cantidad : ";
    cin>>factura[i].cantidad;
    cout<<"precio $:";
    cin>>factura[i].precio;
    cout<<endl;
    }
    
    cout<<endl<<endl;
    cout<<"///////////////////////////////////ESPERE////////////////////////////////////////"<<endl;
    cout<<"////////////////////PROCESANDO DATOS**************************"<<endl;
}

//FUNCION QUE MUESTRA DATOS
void mostrardatos(float costoporarticulo,float d,int n)
{

    cout<<endl<<endl;
    cout<<"***DATOS DE LA COMPRA***"<<endl<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<endl;
    cout<<"*** FACTURA "<<i+1<<" ***"<<endl<<endl;
    cout<<"nombre articulo :"<<factura[i].nombrearticulo<<endl;
    cout<<"cantidad :"<<factura[i].cantidad<<endl;
    cout<<"precio $ :"<<factura[i].precio<<endl;
    factura[i].costoporarticulo=factura[i].precio * factura[i].cantidad;
    cout<<"el total por articulo es $ : "<<factura[i].costoporarticulo<<" "<<endl;
    
    }
}



//FUNCION CALCULO TOTAL DE LA COMPRA (SUMA )
float calculo(float costoporarticulo,float d,int n)
{
   
    float total;
    for(int i=0;i<n;i++)
    {
        total+= factura[i].costoporarticulo;
    }

    cout<<endl;
    return total;
}


//FUNCION PRINCIPAL  MAIN
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
    cout<<"***********************FACTURA COMERCIAL*******************************"<<endl;
    cout<<"                     EMPRESA LA SURTIDORA             "<<endl;
    cout<<" *****BUENOS DIAS***** "<<endl;
    cout<<"Cuantos articulos llevara ?"   <<endl;
    cin>>n;

    fflush(stdin);
    rellenardatos(cos,n);                      //INVOCA A LAS FUNCIOENS
    mostrardatos(costoporarticulo,d,n);
    cout<<"EL TOTAL DE SU COMPRA ES $: "<<calculo(costo,j,n);
    cout<<endl<<endl;
    cout<<"*****GRACIAS VUELVA PRONTO******** "<<endl<<endl;
    
    return 0;
}
