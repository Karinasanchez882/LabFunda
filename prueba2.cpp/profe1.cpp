#include "iostream"
#include "string"
#include  "string.h"

const int longcad=20;

using namespace std;

struct estudiante{
    char nombre[longcad + 1];
    float nota1;
    float nota2;
    float nota3;
    float notapromedio;
};

  void mostrar()
 {
   char c;
    string cad;
    int n,i,j;
    cout<<endl;
    cin.ignore(100,'\n');
    estudiante listado[n];
    

    cout<<"los datos del arreglo son: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<listado[i].nombre<<"--->"<<strlen(listado[i].nombre)<<endl;
        cout<<endl;
        cout<<"nota1 :"<<listado[i].nota1<<endl;
        cout<<"nota2: "<<listado[i].nota2<<endl;
        cout<<"nota3: "<<listado[i].nota3<<endl;
    }
   

  }

int main()
{
    char c;
    string cad;
    int n,i,j;
    cout<<endl;
    cout<<"prueba de arreglo con estructuras"<<endl;
    cout<<"cuantos estudiantes"<<endl;
    cin>>n;
    cin.ignore(100,'\n');
    estudiante listado[n];
    for(i=0;i<n;i++)
    {
        cout<<"nombre: ";
        getline(cin,cad,'\n');
        strncpy(listado[i].nombre,cad.c_str(),longcad);
          listado[i].nombre[longcad]='\0';
          cout<<"nota1: ";
          cin>>listado[i].nota1;
          cout<<"nota2. ";
          cin>>listado[i].nota2;
          cout<<"nota3 :";
          cin>>listado[i].nota3;
          cin.ignore(100,'\n');
    }

  mostrar();

}

  
