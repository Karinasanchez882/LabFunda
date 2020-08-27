#include <iostream>
using namespace std;

int main(){
    float variable = 5.1;
    cout << "Variable: " << variable << endl;
    
    float *puntero = &variable;
    cout << "Leyendo: " << *puntero << endl;
    cout << "Escribiendo..." << endl;
    *puntero = 20.2;
    cout << "Leyendo: " << *puntero << endl;
    
    float **doble = &puntero;
    cout << "Leyendo: " << **doble << endl;
    cout << "Escribiendo..." << endl;
    **doble = 65.3;
    cout << "Leyendo: " << **doble << endl;
    
    cout << "Variable: " << variable << endl;

    return 0;
}