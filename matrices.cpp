#include <iostream>

using namespace std;

int main() {
    int a[3][3] = {1,2,3,4,5,6,7,8,9},
        b[3][3] = {2,2,2,2,2,2,2,2,2}, r[3][3];
    for (int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            r[i][j] = a[i][j]+b[i][j];
        }
    }
    for (int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
