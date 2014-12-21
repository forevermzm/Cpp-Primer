#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
    int array[ 10 ] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector< int > vec( begin( array ), end( array ) );

    for ( auto value: vec ) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
