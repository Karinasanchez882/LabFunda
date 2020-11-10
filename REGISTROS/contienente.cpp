#include "iostream"
#include "string"
using namespace std;
struct continente{
    string nombre;
    string capital;
    int numero;
    int promedio;
};
struct continente lista[5];
int cantidadactualpais=0;

void entrada(),mostrar();


//solicitar datos al usuario
void entrada(){
    if(cantidadactualpais<5){
        cout<<"digite su nombre :"<<endl;
        getline(cin,lista[cantidadactualpais].nombre);

        cout<<"digite la capital :"<<endl;
        getline(cin,lista[cantidadactualpais].capital);

        cout<<"cantidad de habitantes "<<endl;
        cin>>lista[cantidadactualpais].numero;
        cout<<"promedio de edad :"<<endl;
        cin>>lista[cantidadactualpais].promedio;
        cantidadactualpais++;
    }
    else
    {
        cout<<"ERROR DE PAIS"<<endl;
    }
    
}

float suma(){

    int sumatoria=0,total=0;
    for(int i=0;i<cantidadactualpais;i++){
        total+=lista[i].numero;
    }
    cout<<endl;
    cout<<"***el total de habitantes en el continente es****: "<<total<<" "<<endl;
    return total;
}

float promedio(){
    int suma=0,prom=0;
    cout<<endl;
    for(int i=0;i<cantidadactualpais;i++)
    {
        suma+=lista[i].promedio;
    }

    prom=suma/5;
    cout<<"el promedio de edad del contienente es: "<<prom<<" "<<endl;
    return prom;
}

void mostrar(){
    
        for (int i = 0; i < cantidadactualpais; i++) {
            cout << "********MOSTRANDO DATOS INGRESADOS:\n";
            cout << "NOMBRE: " << lista[i].nombre << '\n';
            cout << "CAPITAL: " << lista[i].capital << '\n';
            cout << "HABITANTES: " << lista[i].numero << '\n';
            cout<<"PROMEDIO DE EDAD :"<<lista[i].promedio<<endl;
            // Un return dentro de una funcion hace que esta termine
            return;
        }
    
    
}

int main()
{

    cout<<"******CONTINENTE AFRICANO******"<<endl<<endl;
      bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n1. Entrada de continente\n";
        cout << "2. sumatoria del continente\n";
        cout << "3. mostrar datos \n";
        cout << "4. promedio\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        switch(opcion){
            case 1: entrada(); break;
            case 2: suma(); break;
            case 3: mostrar(); break;
            case 4:promedio();break;
            case 5: continuar = false;
        }
    }while(continuar);

    return 0;
}