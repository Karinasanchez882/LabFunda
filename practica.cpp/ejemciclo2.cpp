#include "iostream"
using namespace std;
bool primo(int n){
    for(int i=n-1;i>1;i--)
    {
        if(n  % i==0){
         return false;
        }
        return true;
    }
}

int main()
{
    int numero=7;
    bool esprimo=false;
    esprimo=primo(numero);
    if(esprimo==true){
     cout<<"Es primo "<<endl;
    }
    else
    cout<<"No es primo "<<endl;
}
    
