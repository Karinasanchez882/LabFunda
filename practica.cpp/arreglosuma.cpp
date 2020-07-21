#include "iostream"
using namespace std;

void hora(int n)
{
    cout<<"introduzca la hora "<<endl;
    cin>>n;
    cout<<"su hora una hora despues es "<<n+1<<" "<<endl;

}
void complet(int m,int s)
{
    cout<<"introduzca minutos y segundos de una hora"<<endl;
    cin>>m>>s;
    if(m<=60 && s<=60)
    {
        cout<<"su hora un minuto despues y un segundo despues es"<<m+1<<" "<<s+1<<" ";
    }
}

void dias(string dia, int mes )
{
    int sumatoria=0;
    cout<<"SUMA DE DIAS"<<endl;
    cout<<"digite un dia :";
    cin>>dia;
    cout<<"el dia que ingreso es "<<dia<<" "<<endl;
    cout<<"digite un mes "<<endl;
    cin>>mes;
    sumatoria=mes+10;
    cout<<"el mes que dijito mas 10 mese mas es :"<<sumatoria<<" "<<endl;
}
int main()
{
   int n;
   int m,s;
   string dia;
   int mes;
   hora(n);
   complet(m,s);
   dias(dia,mes);
}