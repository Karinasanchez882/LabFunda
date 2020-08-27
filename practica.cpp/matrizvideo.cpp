#include "iostream"
using namespace std;

int main()
{
    cout<<endl; 
    cout<<"PRUEBA CON MATRICES "<<endl;
    int numero[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cout<<"DIGITE UN NUMERO : ";
            cin>>numero[i][j];
        }
    }

 cout<<"DATOS DE LA MATRIZ "<<endl;
 for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cout<<numero[i][j]<<"   ";
        }
        cout<<'\n';
    }
    return 0;


}