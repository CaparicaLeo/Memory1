#include <iostream>
using namespace std;
static int a;
void incrementa();
int main(){
    cin >> a;
    incrementa();
    incrementa();
    incrementa();
}
void incrementa(){
    a++;
    cout << a << endl;
}