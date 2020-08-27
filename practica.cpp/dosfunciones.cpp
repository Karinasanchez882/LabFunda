#include "iostream"
#include "conio.h"

using namespace std;

void suma(int sum)
{
    int suma=5;
    sum=suma+1;
    cout<<"su suma es "<<sum<<" "<<endl;

}

void promedio(int sum)
{
   float prom;
   prom = sum/2;
   
   cout<<"su promedio es "<<prom<<" "<<endl;
}

int main()
{
    cout<<"SUMA ENTRE DOS FUNDIONES Y PROMEDIO "<<endl;
    int su;
    int sum;
    suma(su);
    promedio(sum);

    return 0;
}