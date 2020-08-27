#include "iostream"
#include "cmath"
using namespace std;

struc coordenadas{
    float x,y;
};

float distancia (coordenadas punto1,coordenadas punto2)
{
     return sqrt (pow(punto2.x-punto1.x,2) +  pow(punto2.y-punto1.y,2));
}

float distancia(coordenadas,coordenadas);
int main()
{
    int coordenadas punto1,punto2;
    float d;
    cout<<endl;
    cout<<"DISTANCIA ENTRE DOS PUNTOS "<<endl<<endl;
    cout<<"digite las coordenads del primer punto "<<endl;
    cout<<"x1: ";
    cin>>p1.x;
    cout<<"p1.y";
    cin>>p1.x;
    cout<<"digite las coordenadas del segundo punto "<<endl;
    cout<<"x1: ";
    cin>>p2.y;
    cout<<"p1.y";
    cin>>p2.y;

    d=distancia(p1,p2);
    cout<<"la distancia entre  los dos puntos es "<<d<<" "<<endl;
    cout<<endl;
    return 0;
}

