#include "iostream"
#include "fstream"
using namespace std;

int main()
{

    int muestra;
    cout<<endl;
    cout<<"GRABAR ENTEROS EN UN ARCHIVO DE TEXTO"<<endl<<endl;
    ofstream archivo;
    archivo.open("misenteros_c.txt",ios::app);

    cout<<"Digite un entero o ctrl z para finalizar "<<endl;
    while(cin>>muestra)
    {
        archivo.write((char*)&muestra,sizeof(int));
        cout<<"digite un entero o ctrl -z para finalizar ";
    }
    archivo.close();
    cout<<endl;
    return 0;
}