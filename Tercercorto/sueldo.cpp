#include "iostream"
using namespace std;

int main()
{
    float h,he,suma,k,l,descuento,renta,total,tot;
     cout<<endl;
    cout<<"CALCULO DE SALARIOS"<<endl;
    cout<<"ingrese horas trabajadas"<<endl;
    cin>>h;
    cout<<"ingrese horas extras"<<endl;
    cin>>he;

    k=h*1.75; //calcular horas trabajadas
    l=he*2.50;//calculo de horas extras
    suma=k+l;// suma del calculo de horas extras y normales
    descuento=suma*0.0625+suma*0.04;//total salario menos los descuentos 

    cout<<"su salario total es:$"<< suma<<" "<<endl;//muestra el total salario sin descuento
    cout<<"su descuento es : $"<<descuento<<" "<<endl;//muestra descuento del salario
    
    total=suma-descuento;
    cout<<"su salario con descuento de AFP y SEGURO SOCIAL es : $"<<total<<" "<<endl;

    if(suma>=500) //condicion para salarios iguales o mayores a 500 dolares
    {
    renta=suma*0.10+descuento; //calculo de renta aplicar renta + suma de descuento anteriores
    tot=suma-renta;
    cout<<"su  salario real debido a que excede $500 : $"<<tot<<" "<<endl;//muestra descuento total
        
    }

    

    cout<<"GRACIAS POR USAR NUESTROS SERVICIOS"<<endl;




}