#include <iostream>
using namespace std;
int main(){
    int a;
    int *ptr;
    ptr = &a;
    cout << ptr << endl;
    --ptr;
    cout << ptr<< endl;
    return 0;
}