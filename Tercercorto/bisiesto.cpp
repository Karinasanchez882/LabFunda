#include "iostream"
using namespace std;

int main()

{
    int n;

cout<<endl;
    cout<<"CALCULO DE ANIO BISIESTO O NO?"<<endl;
    cout<<"por favor ingrese un anio cualquiera: "<<endl;
    cin>>n;

    if(n %400==0)//debe ser divisible para ser bisiesto
    {
        cout<<"el anio es bisiesto:  si es bisiesto "<<endl;
    }

else if(n%4==0)//condicion para ser bisiesto
{
    cout<<"el anio es bisiesto : si es bisiesto"<<endl;

}

else if(n%100==0)//segunda condicion para ser bisiesto
{
    cout<<"el anio es bisiesto: el anio es bisiesto"<<endl;
}

else // no es bisiesto si no se cumplen las condiciones anteriores
{
    cout<<"el anio es bisiesto : el anio no es bisiesto"<<endl;
}

cout<<endl;
cout<<"MUCHAS GRACIAS , PASE FELIZ DIA"<<endl;

}