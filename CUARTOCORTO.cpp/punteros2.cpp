#include "iostream"
using namespace std;
int main()
{
    int valor1=7 , valor2=8;
    int *puntero=&valor1;
    int *puntero2=&valor2;
    cout<<endl;
    cout<<"*************VALORES*************** "<<endl;
    cout<<"el valor 1 es : "<<*puntero<<"  , ";
    cout<<"el valor 2 es : "<<*puntero2<<" "<<endl<<endl;
    cout<<"*******DIRECCIONES DE MEMORIA*************"<<endl;
    cout<<"valor 1"<<puntero<<"     ";
    cout<<"valor 2"<<puntero2<<"    ";
    return 0;

}