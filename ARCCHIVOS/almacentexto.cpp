#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    ofstream archivo("elArchivo.txt");
    archivo<<"me llamo karina"<<endl<<endl;
    archivo.close();
    return 0;
}