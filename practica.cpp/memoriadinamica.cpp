#include "iostream"
#include "cstdlib"
using namespace std;
int main(void)
{
    int *p=NULL;
    p=(int *)malloc(sizeof(int)*10);
    *p=253;
    cout<<endl;
    cout<<"PRIMERA PRUEBA CON MEMORIA DINAMICA "<<endl;
    cout<<"p apunta a la dirreccion :"<<p<<endl;
    cout<<"el contenido almacenado en la direccion pe es"<<*p<<endl;
    cout<<endl;
    cout<<"p apunta a la direccion de "<<p<<endl;
    return 0;
}