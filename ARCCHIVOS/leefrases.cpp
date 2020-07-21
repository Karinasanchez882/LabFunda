#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    string arr[25];
    int i,k;
    cout<<endl;
    cout<<"LEER FRASES DESDE UN ARCHIVO"<<endl<<endl;
    
    ifstream archivo;
    archivo.open("archivo06.txt");
    i=0;
    while(!archivo.eof())
    getline(archivo,arr[i++],'\n');
    cout<<"las frases del archivo son "<<endl;
    for(k=0;k<i;k++)
        cout<<arr[k]<<endl;

        archivo.close();
        cout<<endl;
        return 0;
    
}