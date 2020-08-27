#include <iostream>
using namespace std;

void solicitar(int *p, int ROWS, int COLS){  //funcion solicitar numeros
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> *(p+i*COLS+j);
        }
    }
}


void mostrar(int *p, int ROWS, int COLS){ //funcion para mostrar la matriz
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cout << *(p+i*COLS+j) << endl;
        }
    }
}

int main(){
    int filas = 3, columnas = 3;//filas rtres y columnas tres
    
    cout<<"MATRIZDE 3 FILAS Y 3 COLUMNAS"<<endl;
    cout << "llenar la matriz" << endl;
    int a[filas][columnas];
    solicitar(*a, filas, columnas);

    
    cout<<endl;
    cout << "*******el resultado es :************" << endl;
    mostrar(*a, filas, columnas);
    return 0;
}