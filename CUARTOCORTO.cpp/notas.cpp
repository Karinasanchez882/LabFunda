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
  int arr[n];//ingresa numero de estudiantes 

  for(i=0; i<5; i++)
    {
        cout<<"introduzca las cinco notas del estudiante  : "<<endl;
        cin>>arreglo1[ i ];//ingresa datos en el arreglo usuario
        suma=suma+arreglo1[i];//suma los datos ingresados en el arreglo
    }
    promedio=suma/5;//division para sacar promedio de notas ingresadas
    cout<<"el promedio del alumno es : "<<promedio<<" "<<endl;

    cout<<endl;
    if(promedio>=6){//condicion para que apruebe el alumno
      cout<<"el alumno aprobo "<<endl<<endl;
    }
   else//condicion contrario el alumno reprueba
    {
      cout<<"el alumno reprobo "<<endl<<endl;
    }
}
int main()
{
notas();//llama a la funcion notas
}
