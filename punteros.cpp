#include <iostream>

using namespace std;

int main() {
    int a = 60;
    int * apuntador = &a;
    cout << apuntador << endl;
    cout << &a << endl;
    cout << *apuntador - a << endl;
    *apuntador *= 2;
    cout << apuntador << endl;
    cout << &a << endl;
    cout << a << endl;

    return 0;
}