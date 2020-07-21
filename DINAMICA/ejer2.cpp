#include "iostream"
#include "cstdlib"
using namespace std;
int main(void)
{
    int *r;
    cout<<endl;
    cout<<"SEGUNDA PRUEBA CON MEMORIA DINAMICA"<<endl<<endl;
    r=(int *) malloc(10*sizeof(int));
    *r=25;
    *(r+1)=30;
    *(r+2)=35;
    *(r+3)=40;
    cout<<"el contenido de la direccion  "<<r<<"es :"<<*r<<endl;
    cout<<"el contenido de la direccion "<<r+1<<"es:"<<*(r+1)<<endl;
    cout<<"el contenido de la direccion "<<r+2<<"es:"<<*(r+2)<<endl;
    cout<<"el contenido de la direccion "<<r+3<<"es:"<<*(r+3)<<endl;
    free(r);
    r=NULL,
    cout<<"r apunta  a la direccion "<<r<<endl;
    cout<<endl;
    return 0;
}