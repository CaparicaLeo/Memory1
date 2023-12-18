#include <iostream>
using namespace std;
int main(){
    int a, b, *ptrA, *ptrB;
    cin >> a >> b;
    ptrA=&a;
    ptrB=&b;
    if(ptrA>ptrB){
        cout << "PONTEIRO A EH MAIOR QUE B" << endl;
    }
    if(ptrA==ptrB){
        cout << "PONTEIROS IGUAIS" << endl;
    }
    if(ptrA<ptrB){
        cout << "PONTEIRO B EH MAIOR QUE A" << endl;
    }
}