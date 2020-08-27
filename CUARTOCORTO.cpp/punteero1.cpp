#include "iostream"
using namespace std;
int main()
{
    int valorentero=8;
    cout<<endl;
    cout<<"***********MODIFICANDO VALORES CON PUNTEROS*******************"<<endl<<endl;
    cout<<"valor sin modificarlo : "<<valorentero<<" "<<endl;
    int *p=&valorentero;
    *p=100;
    cout<<"el valor modificado con puntero es : "<<valorentero<<" ";

    return 0;
    
}