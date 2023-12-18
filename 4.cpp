#include <iostream>
using namespace std;
int main(){
    int a=5,b=7;
    int *ptrA,*ptrB;
    ptrA= &a;
    ptrB= &b;
    cout << "PTR a: " << ptrA << endl;
    cout << "PTR B: " << ptrB << endl;
    cout << "SUBTRACAO: " << ptrA-ptrB << endl;

}