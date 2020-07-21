#include "iostream"
using namespace std;
int factorial (int);
int main(void)
{
    int n,k,comb;
    cout<<endl;
    cout<<"CALCULO DEL COMBINATORIO DE N Y K"<<endl;
    cout<<"digite el valor de n"<<endl;
    cin>>n;
    cout<<"digite el valor de k "<<endl;
    cin>>k;

    comb =factorial(n)/(factorial(k) * factorial(n-k));
    cout<<"EL NUMERO COMBINATORIO ES: "<<comb<<" ";
    cout<<endl;
    return 0;
}

int factorial (int n)
{
    int fact ,i;
    if(n == 0 &&  n== 1)
    
        fact=1;
    
    else
    {
        fact=1;
    
        for(i=1;i<=n;i++)
        

         fact= fact *i;
        
    }
    return fact;
}
