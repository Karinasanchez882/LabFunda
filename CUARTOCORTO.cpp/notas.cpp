#include "iostream"
using namespace std;
void notas()
{
  int n,arreglo1[ 5 ],i,suma=0;
  float promedio;//promedio en decimales
  cout<<endl;
  cout<<"CALCULO DE NOTAS DE ESTUDIANTES "<<endl;
  cout<<"ingrese el numero de estudiantes : " <<endl;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cout<<"ingrese el numero de estudiantes"<<endl;
    cin>>arr[i];

      for(i=0; i<5; i++)
     {
        cout<<"por favor introduzca las cinco notas del estudiantes  : "<<endl;
        cin>>arreglo1[ i ];
        suma=suma+arreglo1[i];
      }
     promedio=suma/5;
      cout<<"el promedio del alumno es : "<<promedio<<" "<<endl;

      cout<<endl;
      if(promedio>=6){
       cout<<"el alumno aprobo "<<endl<<endl;
        }
       else
        {
      cout<<"el alumno reprobo "<<endl<<endl;
        }

  }
}

int main()
{
  notas();
}
