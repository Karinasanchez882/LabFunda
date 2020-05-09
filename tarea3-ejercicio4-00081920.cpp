#include "iostream"

using namespace std;

int main()

{
     int r, n=2;
     float p=3.141592654 , multi;

     cout << "RADIO DE UN CIRCULO;" <<endl << endl;
     cout << "DIGITE EL VALOR DEL RADIO DE SU CIRCULO;"; cin>>r;
     
     multi = p*r*r;
     cout << "EL AREA DE SU CIRCULO ES;" <<multi << endl;

     multi = n*p*r;
     cout << "EL PERIMETRO DE SU CIRCULO ES; " << multi <<endl;


}