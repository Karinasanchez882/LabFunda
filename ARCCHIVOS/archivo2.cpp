#include "iostream"
#include "fstream"
using namespace std;
int main()
{
   unsigned char car;
   unsigned int x;
   cout<<endl;
   cout<<"LEER DATOS DESDE UN ARCHIVO"<<endl<<endl;
   ifstream archivo;
   archivo.open("archivo06.txt");
   car=archivo.get();
   x=archivo.get();
   cout<<"el caracter leido es "<<car<<endl;
   cout<<"el siguiente caracter tiene el valor "<<x<<endl;
   cout<<"en la tabla ASCII"<<endl;
   archivo.close();
   cout<<endl;
   return 0;
}