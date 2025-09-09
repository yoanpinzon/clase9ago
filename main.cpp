#include <iostream>

using namespace std;

int main() {

    int m;
    do{
        cout << "Ingrese el mes=";
        cin >> m;
    } while( m < 1 || m > 12 );
    cout << "El mes que ingreso es " << m << endl;
    return 0;
}