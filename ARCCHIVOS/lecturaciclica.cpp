#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    string frase;
    cout<<"LLENAR UN ARCHIVO CON DATOS DESDE EL TECLADO"<<endl<<endl;
    ofstream archivo;
    archivo.open("archivo06.txt");
    cout<<"DIGITE UNA FRASE O CTRL-Z PARA FINALIZAR "<<endl<<endl;
    while(getline(cin,frase,'\n'))
    {
        archivo<<frase<<endl;
        cout<<"digite una frase o ctrl-z para finalizar: "<<endl;
    }
    archivo.close();
    return 0;
}