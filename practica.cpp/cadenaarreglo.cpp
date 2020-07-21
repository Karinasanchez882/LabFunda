#include "iostream"
#include "cstring"
using namespace std;
int main()
{
    int i;
    char s1[10],s2[10];
    cout<<"digite una palabra :";
    cin>>s2;
    /****************/
    cout<<"la longitud de s2 es: "<<strlen(s2)<<endl;
    /****************/
    strcpy(s1,s2);
    cout<<"s1 es "<<s1<<endl;
    /*************/
    strncpy(s1,"abcdef",3);
    cout<<"s1 es:"<<s1<<endl;
    /***************/
    cout<<"digite una palabra para s1"<<endl;
    cin>>s1;
    cout<<"digite una palabra para s2"<<endl;
    cin>>s2;
    strcat(s1,s2);
    cout<<"s1 es: "<<s1<<endl;
    /****************/
    int n=2;
    strncat(s1,s2,n);
    cout<<"s1 es "<<s1<<endl;
    /*******************/
    cout<<"COMPARACION DE PALABRAS"<<endl,
    cout<<"digite dos palabras para comparar"<<endl;
    cin>>s1;
    cin>>s2;

    int valor=strcmp(s1,s2);

    if(valor == 0){
    cout<<"las cadenas son iguales "<<endl;
     }
     
    else
    
        cout<<"s1 es mayor que s2"<<endl;   
    
    
    return 0;
}