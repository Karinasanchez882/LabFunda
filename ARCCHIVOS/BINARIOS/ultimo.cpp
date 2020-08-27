#include "iostream"
#include "string"
#include "string.h"
#include "fstream"

const int longcad=12;
using namespace std;

struct registro{
 char nombre[longcad+1];
 float nota1;
 float nota2;
 float nota3;
 float notapromedio;
};

void agregar(void);
void modificar(void);
void eliminarregistro(void);
void mostrarlistado(void);

int main()
{
    int opcion;
 do{
       
       cout<<endl;
       cout<<"MANTENIMIENTO DE ARCHIVO DE NOTAS"<<endl<<endl;
       cout<<"Menu de opciones"<<endl;
       cout<<"1)agregar estudiantes"<<endl;
       cout<<"2)modificar registros"<<endl;
       cout<<"3)mostrar listado"<<endl;
       cout<<"eliminar contenido del archivo"<<endl;
       cout<<"5)salir"<<endl;
       cout<<"Elija su opcion"<<endl;
       cin>>opcion;
       switch(opcion)
       {
         case 1: 
         agregar();
         break;

         case 2:
         modificar();
         break;

         case 3:
         mostrarlistado();
         break;

         case 4:
         eliminarregistro();
         break;

         case 5:
         break;
         default:
         cout<<"Opcion no valida"<<endl;

        }
    }while(opcion !=5);
    cout<<endl;
    return 0;
}

void agregar(void)
{

 ofstream archivosalida;
 archivosalida.open("cuadroNotas.dat",ios::out | ios::app | ios::binary );
 registro estudiante;
 char continuar;
 string cad;
 cout<<endl;
 cout<<"GRABACION DE ESTUDIANTES Y NOTAS EN UN ARCHIVO "<<endl<<endl;
 do{
     cout<<"desea introducir un estudiante(s/n)"<<endl;
     cin>>continuar;
     cin.ignore(100,'\n');
     if(continuar='s'){
         cout<<"digite los siguientes datos"<<endl;
         cout<<"nombres :" ;
         getline(cin,cad,'\n');
         strncpy(estudiante.nombre,cad.c_str(),longcad);
         estudiante.nombre[longcad]='\0';
         cout<<"nota1 :";
         cin>>estudiante.nota1;
         cout<<"nota2: ";
         cin>>estudiante.nota2;
         cout<<"nota3 :";
         cin>>estudiante.nota3;
         cin.ignore(100,'\n');
         archivosalida.write((char*)&estudiante,sizeof(estudiante));
       }

    }while(continuar =='s');
    archivosalida.close();

}

void modificar(void)
{
    fstream archivo;
    archivo.open("cuadroNotas.dat",ios::in | ios::out | ios::binary);

    registro estudiante;
    char continuar,modificar;
    string cad;
    cout<<endl;
    cout<<"MODIFICAR DE REGISTRO DE ESTUDIANTES"<<endl;
    do{
        cout<<"visualizar el siguiente registro ";
        cin>>continuar;
        cin.ignore(100,'\n');
         if(continuar =='s')
         {
            if(archivo.read((char*)&estudiante,sizeof(estudiante))){
                cout<<estudiante.nombre<<endl;
                cout<<estudiante.nota1<<endl;
                cout<<estudiante.nota2<<endl;
                cout<<estudiante.nota3<<endl;
                cout<<"Desea modificar este registro(s/n) ? : ";
                cin>>modificar;
                cin.ignore(100,'\n');
                if(modificar=='s'){ 
                    cout<<"Digite nuevos datos "<<endl;
                    cout<<"nombres "<<endl;
                    getline(cin,cad,'\n');
                    strncpy(estudiante.nombre,cad.c_str(),longcad);
                    estudiante.nombre[longcad]='\0';
                    cout<<"nota1 ";
                    cin>>estudiante.nota1;            
                    cout<<"nota 2";
                    cin>>estudiante.nota2;
                    cout<<"nota 3";
                    cin>>estudiante.nota3;
                    cin.ignore(100,'\n');
                    archivo.seekp(-sizeof(estudiante),ios_base::cur);
                    archivo.write((char*)&estudiante,sizeof(estudiante));

                }
            }

          else{
            cout<<"ya no hay mas registros de estudiantes "<<endl<<endl;
            continuar='n';
          }
        }
    }while(continuar=='s');
    archivo.close();
    
}


void eliminarregistro(void)
{
  
  ofstream archivosalida;
  archivosalida.open("cuadroNotas.dat",ios::out | ios ::binary);
  archivosalida.close();
  cout<<"registro de estudiantes eliminado"<<endl;
}

void mostarlistado(void)
{
    ifstream archivoentrada;
    archivoentrada.open("cuadroNotas.dat",ios::in | ios::binary);

    registro estudiante;
    cout<<endl;
    cout<<"LISTADO DE ESTUDIANTES Y NOTAS"<<endl;
    while(archivoentrada.read((char*)&estudiante,sizeof(estudiante)))
    {
        cout<<estudiante.nombre<<endl;
        cout<<estudiante.nota1<<endl;
        cout<<estudiante.nota2<<endl;
        cout<<estudiante.nota3<<endl;
    }

  cout<<endl<<"FIN de archivo"<<endl;
  archivoentrada.close();
}
