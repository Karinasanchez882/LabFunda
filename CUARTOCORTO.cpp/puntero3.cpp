#include "iostream"
using namespace std;
int main(){
 int valor;
 int *p = &valor;
 cout<<endl;
 cout<<"***/***/***/EJERCICIO 3 USUSARIO Y PUNTEROS***/***/***"<<endl;
 cout<<"ingrese un numero entero cualquiera  : ";
 cin>>valor;
 cout<<"**el valor ingresado por el usuario es :"<<*p<<"  : "<<endl;
 cout<<"*****PROGRAMA FINALIZADO*********";
 return 0;
}