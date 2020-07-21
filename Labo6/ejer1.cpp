#include "iostream"

using namespace std;

int resultado(int mayor,int menor, int residuo){

    do
    {
        residuo=mayor%menor;
        if(residuo!=0){
            mayor=menor;
            menor=residuo;

        }

        

    }

        while(residuo!=0);
 
}

int main(){

    int mayor, menor,residuo;
    cout<<endl;
    cout<<" MCD DE EUCLIDES"<<endl;
    cout<<"por favor ingrese dos numeros enteros uno mayor y otro menor"<<endl;
    cout<<"INGRESE UN NUMERO MAYOR: ";
    cin>>mayor;
    cout<<"INGRESE UN NUMERO MENOR: ";
    cin>>menor;
    cout<<"el resultado es : " <<resultado(mayor,menor,residuo);
    cout<<"GRACIAS POR USAR NUESTRO SERVICIO"<<endl;
    cout<<"FELIZ DIA"<<endl;

}

