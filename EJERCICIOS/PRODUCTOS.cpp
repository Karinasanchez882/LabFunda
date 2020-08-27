#include "iostream"
using namespace std;

void llenararreglo(int n)
{
    int i;
    string a[100];
    cout<<"digite los "<<n<<"elementos del arreglo "<<endl;
    
    
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
}

void desplegararreglo(int n)
{
    int i;
    string a[100];
    cout<<"los elementos del arreglo son "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"     ";
    }
}


int main(void)
{
    int n;
    cout<<"cuantos elementos quiere introducir? "<<endl;
    cin>>n;
    llenararreglo(n);
    desplegararreglo(n);
    return 0;
}
