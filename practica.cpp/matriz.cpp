#include "iostream"
using namespace std;
void leermatriz(int[][25],int,int);
void mostrarmatriz(int[][25],int,int);

int main(void)
{
    int a[25][25],m,n;
    cout<<endl;
    cout<<"EJEMPLO CON UNA MATRIZ"<<endl<<endl;
    cout<<"digite las dimensiones de la matriz"<<endl;
    cout<<"cantidad de filas :"<<endl;
    cin>>m;
    cout<<"cantidad de columnas :"<<endl;
    cin>>n;

    leermatriz(a,m,n);
    mostrarmatriz(a,m,n);
    cout<<endl;
    return 0;
}

void leermatriz(int x[][25],int m,int n)
{
    cout<<"digite los siguientes elementos de la matriz "<<endl;
    for(int i=0;i<m;i++)
    {
         for(int j=0;j<n;j++)
         {
             cout<<"elemento de fila "<<i<<" y columna "<<j<<"  : "<<endl;
             cin>>x[i][j];
             
         }
         cout<<endl;
    }

}

void mostrarmatriz(int x[][25],int m,int n)
{
    cout<<"la matriz es la siguiente "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<x[i][j] <<"  ";

        }
        cout<<'\n';
    }

}