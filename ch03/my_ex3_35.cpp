#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
    constexpr size_t size = 10;
    int array[ size ];
    for ( auto beginIter = begin( array ), endIter = end( array ) ; beginIter != endIter ; beginIter ++ ) {
        *beginIter = 0;
    }
    
    for ( auto value : array ) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
