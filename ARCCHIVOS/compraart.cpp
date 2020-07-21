#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    string nombre;
    int cantidad;
    float precio;
    int i,k;
    cout<<endl;
    cout<<"LEER PALABRA POR PALABRA DESDE UN ARCHIVO"<<endl;
    ifstream archivo;
    archivo.open("archivo10.txt");
    while (!archivo.eof())
    {
        archivo>>nombre;
        archivo>>cantidad;
        archivo>>precio;
        cout<<"se compraron "<<cantidad<<" unidades de ";
        cout<<nombre<<" A $"<<precio<<endl;
    }
    archivo.close();
    cout<<endl;
    return 0;
}