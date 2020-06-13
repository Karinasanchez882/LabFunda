#include "iostream"

using namespace std;

int main()

{
    int dd , mm , aa;

    cout<<endl;
    cout<<"CALCULO DE FECHA SOLO ANIOS BISIESTOS?"<<endl;
    cout<<endl;
    cout<<"POR FAVOR INGRESE UNA FECHA CUALQUIERA CON ANIO MES Y DIA"<<endl;
    cin>>aa>>mm>>dd;
    cout<<"la fecha que usted ingreso es:"<<endl;
    cout<<"anio: "<<aa<<endl;
    cout<<"mes: "<<mm<<endl;
    cout<<"dia: "<<dd<<endl;
    cout<<endl;

     if(aa%400==0  && aa%4==0   && mm<=12 && dd<=366)//para que el año sea bisiesto debe ser divisible solo por esos numeros 
    {
        dd++;
        cout<<"su fecha un dia despues es: "<<endl;
        cout<<"su anio : "<<aa<<" "<<endl;
        cout<<"su mes : "<<mm<<" "<<endl;
        cout<<"su dia siguiente : "<<dd<<" "<<endl;
        cout<<"SU ANIO ES BISIESTO!"<<endl;


    }

    

   

    else
    {

       dd++;
        cout<<"su fecha un dia despues es: "<<endl;
        cout<<"su anio : "<<aa<<" "<<endl;
        cout<<"su mes : "<<mm<<" "<<endl;
        cout<<"su dia siguiente : "<<dd<<" "<<endl<<endl;

       cout<<"SU ANIO NO ES BISIESTO!"<<endl;
   

    }

    cout<<"GRACIAS POR USAR NUESTRO SERVICIO"<<endl;
    cout<<endl;
    cout<<"FELIZ DIA"<<endl;




}
