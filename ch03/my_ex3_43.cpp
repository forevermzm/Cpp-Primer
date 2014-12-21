#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int ia[ 3 ][ 4 ] = { { 0 }, { 4 }, { 8 } };
    for ( size_t i = 0 ; i < 3 ; i ++ ) {
        for ( size_t j = 0 ; j < 4 ; j ++ ) {
            cout << ia[ i ][ j ] << " ";
        }
        cout << endl;
    }
    for ( int (&row)[ 4 ] : ia ) {
        for ( int &col : row ) {
            cout << col << " ";
        }
        cout << endl;
    }
    for ( int (*p)[ 4 ] = ia ; p < ia + 3 ; p ++ ){
        for ( int *q = *p ; q < *p + 4 ; q ++ ) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}
