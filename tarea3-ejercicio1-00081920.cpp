#include "iostream"

using namespace std;

int main()

{
    int a , b , c , suma , div;
    cout << "PROMEDIO DE TRES NUMEROS ENTEROS" <<endl << endl;

    cout << "Digite el valor de a; ";
    cin>>a;

    cout << "Digite el valor de b;";
    cin>>b;
    cout << "Digite el valor de c;";
    cin>>c;
    
    suma = a+b+c;
    cout << "la suma es;" << suma << endl;
    div=suma/3;
    cout << "SU PROMEDIO ES;" <<div << endl;

}