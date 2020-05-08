#include "iostream"

using namespace std;

int main()

{
    string a;
    float b, t;
    int c;

    cout << "PRODUCTOS COMPRADOS;" <<endl << endl;
    cout << "Digite el nombre del producto;";
    cin >>a;

    cout << "Digite el precio del producto;" ;cin>>b;

    cout <<"Digite la cantidad comprada;" ;cin>>c;

    t = b*c;

    cout << "SU TOTAL DE DINERO GASTADO EN DOLARES ES; " <<t << endl;
    


}