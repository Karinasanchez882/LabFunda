#include "iostream"
using namespace std;
int fundoble(int num,int numusuario ){
    return numusuario*num;
}
int funtriple(int num,int numusuario){
    return numusuario*num;
}

int main()
{
    int numero=2, doble=0 ,triple=0,numusuario;
    cout<<"ingrese  un numero ";
    cin>>numusuario;
    doble =fundoble(numero,numusuario);
    triple=funtriple(numero,numusuario);
    cout<<endl;
    cout<<"BUSCANDO NUMERO DOBLE Y TRIPLE DE DOS "<<endl;
    cout<<"el multiplicando de "<<doble<<endl;
    cout<<"el multiplicando de "<<triple<<endl;
    cout<<"Gracias"<<endl;
}
