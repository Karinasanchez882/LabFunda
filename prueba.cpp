#include "iostream"
 using namespace std;

int main(void)

 
 {

 
    int a = 20, k = 5, j = 10, M ;

    M = k++ + (a *= 10) + --j;

    cout << "a: " << a << " k: " << k << " j: " << j << "  M :" <<M <<endl;

    cout << endl;

 }