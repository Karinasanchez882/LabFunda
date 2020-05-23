#include "iostream"
#include "string"
using namespace std;

int main()

{
    int n = 0 ;
    string p ;

    cout <<endl;
    cout << "LONGITUD DE UNA PALABRA" << endl;
    cout << "INGRESE UNA PALABRA CUALQUIERA: ";
    cin>>p;


if( p.length()<=10) 
{

cout <<" la palabra tiene menos de diez caracteres : SI";

}

else

{

cout<<"LA PALABRA TIENE MAS DE DIEZ CARACTERES : SI  TIENE MAS DE 10 " ;

}


if( p.length()%2 == 0) 

{

cout<<endl;
cout <<"LA PALABRA ES PAR: SI " ;

}

else

{

cout<<endl;
cout<<"la palabra es impar :  OBVIO SI";

}



}
