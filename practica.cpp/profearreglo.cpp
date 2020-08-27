#include "iostream"
using namespace std;

void llenararreglo(int[],int);
void desplegararreglo(int[],int);

void llenararreglo(int a[],int n)
{
    int i;
    cout<<"digite los "<<n<<"elementos del arreglo "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void desplegararreglo(int a[],int n)
{
    int i;
    cout<<"los elementos del arreglo son "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main(void)
{
    int n;
    int a[100];
    cout<<"cuantos elementos quiere introducir? "<<endl;
    cin>>n;
    llenararreglo(a,n);
    desplegararreglo(a,n);
    return 0;
}


