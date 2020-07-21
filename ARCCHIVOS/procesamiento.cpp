#include "iostream"
#include "fstream"

using namespace std;

int main(void)
{
    ofstream archivo;
    archivo.open("miprimerarchivo.txt");
    archivo.close();
    return 0;
}
