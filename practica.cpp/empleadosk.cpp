#include "iostream"
using namespace std;
int salarios(int);

void salarios(int sa,int he)
{
    int suma;
    cout<<"introduzca salario "<<endl;
    cin>>sa;
    cout<<"introduzca horas extras"<<endl;
    cin>>he;
    suma=sa+he;
    cout<<"la suma total de salario y horas extras es "<<suma<<" "<<endl;
}



    void DefinirArreglo(float a[])
  {
    int i,suma=0,prom;
    cout<<" digite las cinco notas del estudiantes"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
       suma=suma+a[i];
    }
    cout<<"la suma es :"<<suma<<" "<<endl;
    prom=suma/5;
    cout<<"su promedio es :"<<prom<<" ";

  }

int main()
{
    int n;
    int sa,he;
    int k,arreglo[100];
    float a[100];
    cout<<"calculo de salarios "<<endl;
    cout<<"introduzca la cantidad de empleados "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cout<<endl;
      cout<<"---EMPLEADO---"<<i<<"----"<<endl<<endl;
      salarios(sa,he);
      DefinirArreglo(a);
      
    }
}
