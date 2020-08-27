#include <iostream>
using namespace std;

void solicitar(float a[], float tamano){
    for(int i = 0; i < tamano; i++){
		cout << "Digite un numero: ";
		cin >> a[i];
	}
}

float media(float a[], float tamano){
    float suma = 0;
    for (int i = 0; i < tamano; i++)
        suma += a[i];
    return suma / tamano;
}



int main(){


    float ta=5;
    int a;

	solicitar(a,ta);
    cout<<"media "<<media(a,ta);
    return 0;

	
	
	
	
    return 0;
}