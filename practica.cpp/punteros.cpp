#include "iostream"
using namespace std;
void calculo(int num,int *doble , int *triple)
{
    *doble=2*num;
    *triple=3*num;
    
}
int main()
{
 int numero=2 ,doble=0 ,triple=0;
 calculo(numero,&doble ,&triple);
 cout<<"el doble de 2 es "<<doble<<endl;
 cout<<"el triple de 2 es "<<triple<<endl;
 return 0;
}