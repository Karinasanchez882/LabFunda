#include "iostream"
#include "fstream"
using namespace std;
int main(){
int entero;
cout<<endl;
cout<<"GRABAR ENTEROS EN UN ARCHIVO DE TEXTO"<<endl;

ofstream archivo;
archivo.open("misenteros_a.txt",ios::app);
cout<<"digite un entero o ctrl-z para finalizar: ";
while(cin>>entero)
{
    archivo<<entero<<'\n';
    cout<<"digite un entero o ctrl-z para finalizar ";
}

archivo.close();
cout<<endl;
return 0;
}