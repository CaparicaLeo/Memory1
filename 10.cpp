#include <iostream>
using namespace std;
int main(){
    int a=4,b=4;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    if(p1>p2){
        cout << "ENDEREÇO DA VARIAVEL 1 É MAIOR" <<endl;
    }
    if(p1==p2){
        cout << "ENDEREÇOS IGUAIS" << endl;
    }
    if(p1<p2){
        cout << "ENDEREÇO DA VARIAVEL 2 É MAIOR" << endl;
    }
}