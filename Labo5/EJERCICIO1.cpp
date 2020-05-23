#include "iostream"

using namespace std;

int main()

{

    int numero1 , numero2 ;
    cout << "INGRESE UN NUMERO ENTERO: ";
    cin>>numero1;

cout << "INGRESE EL DIVISOR: ";
cin>>numero2;


    if (numero1%numero2 == 0)
 {
     cout<< "EL NUMERO ES DIVISBLE: SI ";

 }

else if (numero1%numero2 != 0)
cout << "EL NUMERO ES DIVISIBLE: NO ";


return 0;

}