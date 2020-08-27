#include <iostream>
#include <string.h>

using namespace std;

int consonate(char *p){

    int consonante = 0;
    
    while(*p){

        switch (*p)
        {
            case 'A': 

                consonantes++;
                break;

            case 'E':

                consonantes++;
                break;

            case 'I':

                consonantes++;
                break;

            case 'O':

                consonantes++;
                break;

            case 'U':

                consonantes++;
                break;
        }
        p++;
    }

    return consonantes;
}
int main(){

    char cadena[10];
    int consonante = 0;
    char *p;
    p = cadena; 

    cout << "INGRESE PALABRA: ";
    
    cin.getline(cadena, 50, '\n');

    strupr(cadena); 

    cout << "**************NUMERO DE CONSONANTES ES ******************: " << consonante(p) << endl;

    return 0;
    

}