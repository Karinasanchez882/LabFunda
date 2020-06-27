#include "iostream"//libreria de cout y cin mostrar resultados y ingresar
using namespace std;
string codificacion(){
char  palabra[9];//utilizado para el arreglo en palabras char
gets(palabra);//lee una cadena desde el teclado 
int medida=sizeof(palabra);//medir la palabra

    for(int i=0; i<medida; i++)
    {
        if(palabra[i] =='m'){  //arreglo igual a 0
           
        palabra[i]='0'; //comparacion del arreglo con letra ingresada
        } 
             
        else //caso contrario

        if(palabra[i] =='u'){    //condicion palabra igual a u
                       
        palabra[i]='1';
         }
        else //caso contrario
        
        if(palabra[i] =='r'){ //si la palabra es igual a r  
                   
         palabra[i]='2';  
         
         }
           
        else // caso contrario
        
        if(palabra[i] =='c'){

        palabra[i]='3';
        }
        else
        
        if(palabra[i] =='i'){

        palabra[i]='4';
        }
        else
        
        if(palabra[i] =='e'){

        palabra[i]='5';
            }
        
        else
        
        if(palabra[i] =='l'){

        palabra[i]='6';
        }
        else
        
        if(palabra[i] =='a'){
        palabra[i]='7';
          }   
        else
        
        if(palabra[i] =='j'){ 

        palabra[i]='8';
         }
        else
        
        if(palabra[i] =='o') //el proceso se de if se reitero sucesivamente hasta letra 9
                               
        palabra[i]='9';
        
    }  
    cout<< palabra;
 
}

int main()//funcion main
{
    cout<<endl;
    cout<<"CLAVE MURCIELAGO"<<endl;//titulo
    cout<<"por favor ingrese una palabra"<<endl;
    codificacion();//llama la funcion principal
    cout<<endl;
    cout<<endl;
    cout<<"GRACIAS POR USAR NUESTROS SERVICIOS"<<endl;
    
}