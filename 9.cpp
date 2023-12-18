#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "SELECIONE O TAMANHO: ";
    cin >> n;
    int v[n];
    int *ptr;
    for(int i=0;i<n;i++){
        v[i]=i;
    }
    ptr = &v[0];
    for(int i=0;i<n;i++){
        cout << *(ptr+i) << " ";
    }
}