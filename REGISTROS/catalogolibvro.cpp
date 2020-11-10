#include <iostream>
#include <string>
using namespace std;

struct libro{
    string titulo;
    string autor;
    string editorial;
    int edicion;
};
struct libro catalogo[10];
int cantidadActualLibros = 0;

void entrada(), buscarTitulo(), buscarAutor();

int main(){
    // Mostrar menu al usuario
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n1. Entrada de libro\n";
        cout << "2. Buscar por titulo\n";
        cout << "3. Buscar por autor\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        switch(opcion){
            case 1: entrada(); break;
            case 2: buscarTitulo(); break;
            case 3: buscarAutor(); break;
            case 4: continuar = false;
        }
    }while(continuar);

    return 0;
}

void entrada(){
    if(cantidadActualLibros < 10){
        // Solicitar datos al usuario
        cout << "Digite su titulo: ";
        getline(cin, catalogo[cantidadActualLibros].titulo);
        cout << "Digite su autor: ";
        getline(cin, catalogo[cantidadActualLibros].autor);
        cout << "Digite su editorial: ";
        getline(cin, catalogo[cantidadActualLibros].editorial);
        cout << "Digite su edicion: ";
        cin >> catalogo[cantidadActualLibros].edicion;
        cin.ignore();
        
        // Aumentar contador de cantidad de libros
        cantidadActualLibros++;
    }
    else cout << "Error, catalogo lleno!\n";
}

void buscarTitulo(){
    // Se solicita al usuario el titulo a buscar
    string unTitulo;
    cout << "Titulo a buscar: ";
    getline(cin, unTitulo);
    
    // Si se encuentra en el catalogo, se muestra y termina funcion
    for (int i = 0; i < cantidadActualLibros; i++) {
        if(unTitulo.compare(catalogo[i].titulo) == 0){
            cout << "Libro encontrado:\n";
            cout << "Titulo: " << catalogo[i].titulo << '\n';
            cout << "Autor: " << catalogo[i].autor << '\n';
            cout << "Editorial: " << catalogo[i].editorial << '\n';
            cout << "Edicion: " << catalogo[i].edicion << '\n';
            // Un return dentro de una funcion hace que esta termine
            return;
        }
    }
    
    // Si se busco en todas las casillas y no se encontro:
    cout << "Libro no encontrado :(\n";
}

void buscarAutor(){
    cout << "AUTOR .\n";
    string unautor;
    cout<<"autor a buscar? ";
    getline(cin,unautor);
    
    for(int i=0;i<cantidadActualLibros; i++){
        if(unautor.compare(catalogo[i].autor)==0){
            cout<<"AUTOR ENCONTRADO :V "<<endl;
            cout<<"titulo :"<<catalogo[i].titulo<<endl;
            cout<<"autor :"<<catalogo[i].autor<<endl;
            cout<<"editorial :"<<catalogo[i].editorial<<endl;
            cout<<"edicion :"<<catalogo[i].edicion<<endl;
            return; 
        }
    }
    cout<<"libro no encontrado :c"<<endl;
    
}