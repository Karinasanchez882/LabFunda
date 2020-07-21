#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    ofstream archivo("archivokari.txt");
    archivo<<"ME LLAMO KARINA,\n ";
    archivo<<"¿ y  vos? \n";
    archivo<<"yo me llamo PEPITO \n";
    archivo<<"y soy bien portado \n";
    archivo.close();
    return 0;
}