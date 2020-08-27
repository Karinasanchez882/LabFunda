#include "iostream"
#include "fstream"
using namespace std;
int main(void)
{
    unsigned char letra;
    cout<<endl;
    cout<<"AVANZAR Y RETROCEDER EN UN ARCHIVO DE TEXTO "<<endl<<endl;
    
    ifstream abecedario;
    abecedario.open("abecedario.txt",ios::in);
    cout<<"ARCHIVO ABIERTO"<<endl;
    cout<<"la posicion inicial del archivo es : "<<abecedario.tellg()<<endl;

    abecedario>>letra;
    cout<<"CARACTER LEIDO :"<<letra;
    cout<<endl;
    cout<<"ESTAMOS EN LA POSICION "<<abecedario.tellg()<<" del archivo"<<endl;

    abecedario>>letra;
    cout<<"CARACTER LEIDO :"<<letra;
    cout<<endl;
    cout<<"ESTAMOS EN LA POSICION "<<abecedario.tellg()<<" del archivo"<<endl;

    cout<<"AVANZAR LEYENDO UNOS CUANTOS "<<endl;
    for(int i=1;i<16;i++)
    abecedario>>letra;
    cout<<"ESTAMOS EN LA POSICION "<<abecedario.tellg()<<" del archivo "<<endl;

    cout<<"RETROCEDEMOS 4 CARACTERES"<<endl;
    abecedario.seekg(-4,ios_base::cur);
    cout<<"ESTAMOS EN LA POSICION "<<abecedario.tellg()<<" del archivo"<<endl;

    cout<<"AVANCEMOS 10 CARACTERES "<<endl;
    abecedario.seekg(10,ios_base::cur);
    cout<<"ESTAMOS EN LA POSICION "<<abecedario.tellg()<<" del archivo "<<endl;

    cout<<"LEYENDO CONTENIDO RESTANTE DEL ARCHIVO "<<endl;
    while(abecedario>>letra)
    {
        cout<<letra<<'\t';
    }
    cout<<endl;
    cout<<"ESTAMOS EN LA POSICION "<<abecedario.tellg()<<" del archivo "<<endl;

    abecedario.clear();

    cout<<"nos colocamos al inicio de nuevo "<<endl;
    abecedario.seekg(0);

    cout<<"contenido completo del archivo "<<endl;
    while(abecedario>>letra)
    {
        cout<<letra<<'\t' ;

    }

    cout<<endl;
    cout<<"estamos en la posicion "<<abecedario.tellg()<<" del archivo"<<endl;
    abecedario.clear(); //IMPORTANTE CADA VEZ QUE SE VE EL FINAL O SE DETECTA EL FINAL

    cout<<"otra vez contenido completo del archivo "<<endl;
    abecedario.seekg(0);
    while(abecedario>>letra)
    {
        cout<<letra<<'\t';
    }
    cout<<endl;
    cout<<"estamos en la posicion "<<abecedario.tellg()<<" del archivo "<<endl;

    abecedario.close();
    cout<<endl;
    return 0;

}
