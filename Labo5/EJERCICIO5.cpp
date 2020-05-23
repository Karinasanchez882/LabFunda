#include "iostream"
#include "string"
using namespace std;

int main()

{
  string a ;

cout <<endl;
cout<<"PRUEBA DE LETRA INCIAL Y LETRA FINAL" <<endl;
cout<<"ingrese una palabra cualquiera: " ;
cin>>a;

string palabra1 = a.substr(0,1);
string medicion = a.substr(a.length()-1);

  if ( palabra1 == medicion)
 {
     cout<< "la palabra inicia con la primera letra: SI ";

 }



else 
{
  
  cout<<"la palabra finaliza con la misma letra de inicio: NO ";

}

  
return 0;


}