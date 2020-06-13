#include "iostream"

using namespace std;
int main()


{
    int h , m , s;
    cout<<endl;
    cout<<"CALCULO DE HORA?"<<endl;
    cout<<"ingrese una hora"<<endl;

    cin>>h>>m>>s;
    cout<<endl;

    

    if(h<=24 && m<=60 && s<=60)
    {
        s++;
        cout<<"su hora un segundo despues es: "<<endl;
        cout<<"hora: "<<h<<" "<<endl;
        cout<<"minutos: " <<m<<" "<<endl;
        cout<<"un segundo despues: "<<s<<" "<<endl<<endl;

    }

   

    else
    {
       cout<<"no ingreso una hora valida"<<endl;

    }


    
      

    

    
cout<<"GRACIAS POR USAR NUESTROS SERVICIOS: "<<endl;

}

