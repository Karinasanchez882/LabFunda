#include "iostream"

using namespace std;
 
int main()
{
float numero;

cout << endl;
cout << "PRUEBA DE NUMEROS POSITIVOS, NEGATIVOS Y CERO" << endl;

cout << "INGRESE UN NUMERO CUALQUIERA: ";
cin>>numero;

if(numero>0)
{
cout << "EL NUMERO ES POSITIVO : SI ";

}

else if(numero<0)
cout << " EL NUMERO ES NEGATIVO : SI";

else
{
    cout<<"EL NUMERO ES 0 : SI";
}

return 0;

}
