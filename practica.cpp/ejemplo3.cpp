#include "iostream"
#include "stdlib.h"
#include "time.h"

using namespace std;
int main()
{
    int numero,dato,contador=0;
    cout<<"NUMERO SECRETO "<<endl;
    srand(time(NULL));
    dato=1 + rand()%(100);
    do{
        cout<<"digite un numero : ";cin>>numero;
        if(numero>dato)
        {
            cout<<"digite un numero menor "<<endl;
        }
        if(numero<dato)
        {
            cout<<"digite un numero mayor "<<endl;
        }
        contador++;

    }
    while(numero !=dato);
    cout<<"FELICIDADES ADIVINASTES EL NUMERO "<<endl;
    cout<<"numero de intentos "<<contador<<endl;
    system("pause");
    return 0;


}