#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    int muestra,suma,n;
    float promedio;
    cout<<endl;
    cout<<"LEER ENTEROS DE UN ARCHIVO BINARIO "<<endl<<endl;

    ifstream archivo;
    archivo.open("C:\\Users\\jacky\\Desktop\\LabFunda\\ARCCHIVOS\\BINARIOS\\misenteros_c.txt");

    suma=n=0;
    cout<<"los datos del archivo binario son: "<<endl;
    while(archivo.read((char*)&muestra,sizeof(int)))
    {
        cout<<muestra<<endl;
        suma=suma+muestra;
        n=n+1;
    }
    promedio=(float)suma/n;
    cout<<"el promedio de los valores es "<<promedio<<endl;
    archivo.close();
    cout<<endl;
    return 0;

}