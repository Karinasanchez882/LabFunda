#include "iostream"
using namespace std;

void DefinirArreglo(float[]);
void promedio(float[]);

int main(void)
{
    float cal[5];
    int alumn=1,n=0;
    cout<<"intrucciones las notas se introduciran en vase 10"<<endl<<endl;
    cout<<endl;

  DefinirArreglo(cal);
  promedio(cal);
  return 0;

}

void DefinirArreglo(float a[])
{
    int i;
    cout<<" digite las cinco notas del estudiantes"<<endl;
    for(i=0;i<5;i++)

   cin>>a[i];
}

void promedio(float a[])
{
    float prom;
    prom=(a[0] +a[1] +a[2] +a[3] +a[4]) /5;

    if(prom<6)
    {
        cout<<"el promedio del alumno es "<<prom<<endl;
        cout<<"el alumno reprobo"<<endl;
    }

    else
       {
         cout<<"el promedio del alumno es "<<prom<<endl;
         cout<<"el alumno aprobo"<<endl;
       }
    
    
}