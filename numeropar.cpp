#include "iostream"

using namespace std;

int main()

{
    int n, resp;
    string txtresp;

    cout << endl;
    cout <<"EJERCICIOS DE UN NUMERO PAR E IMPAR" << endl;

    cout << "digite un valor:";
    cin>> n;

txtresp = (n%2 == 0) ? " es par " : "es impar" ;
cout <<n << txtresp << endl;
return 0;

     
}