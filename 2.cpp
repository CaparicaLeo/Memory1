#include <iostream>
using namespace std;
int main(){
    int a = 42;
    int *ponteiro = &a;

    cout << "Valor original da variável: " << *ponteiro << endl;

    const int constante = 10;
    ponteiro += constante;

    cout << "Valor após adição da constante: " << *ponteiro << endl;

    return 0;
}