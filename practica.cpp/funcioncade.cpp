#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;
void funcion()
{
    char palabra[]= "KARINA";
    char palabra2[]= "k,a,r,i,n,a";
    char nombre[30];

    cout<<"digite su nombre ";
    gets(nombre);
    cout<<nombre<<endl,
    getch();
}
int main()
{
    cout<<endl;
    cout<<"PROBLEMA CON CADENAS Y ARREGLOS "<<endl;
    funcion();
}