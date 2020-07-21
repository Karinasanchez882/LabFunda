#include "iostream"
#include "conio.h"
using namespace std;

void promedio(float nota1,float nota2,float nota3)
{
   float resultado=(nota1+nota2+nota3)/3;
   cout<<"PROMEDIO : "<<resultado<<endl;
  if(resultado>=6)
  {
     cout<<"el estudiante APROBO "<<endl;
  }

  else
  {
     cout<<"el estudiante REPROBO "<<endl;
  }
}

int main()
{
    float primera;
    float segunda;
    float tercer;
    int n,i;
    int prom;
    cout<<endl<<endl;
    cout<<"CALCULO DE NOTAS "<<endl<<endl;
    cout<<"cantidad de estudiantes"<<endl;
    cout<<"introduzca n estudiantes"<<endl;
    cin>>n;

     for(int i=0;i<n;i++)
      {
         cout<<"introduzca tres notas :"<<endl;
         cin>>primera;
         cin>>segunda;
         cin>>tercer;
       
       cout<<"NOTAS "<<endl;
       promedio(primera,segunda,tercer);
       cout<<endl;

      }
}