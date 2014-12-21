#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector< int > intArray;
    int inputNum;
    while ( cin >> inputNum ){
        intArray.push_back( inputNum );
    }

    if ( intArray.size() <= 1 ){
        cout << "Not enough elements" << endl;
        return -1;
    }
    for ( decltype( intArray.size() ) i = 0; i < intArray.size() - 1 ; i ++ ) {
        cout << intArray[ i ] + intArray[ i + 1 ] << " "; 
    }
    cout << endl;
    auto len = intArray.size();
    for ( decltype( intArray.size() ) i = 0; i <= len / 2; i ++ ) {
        if ( i <= len - i - 1) {
            cout << intArray[ i ] + intArray[ len - i - 1 ] << " ";
        }
    }
    cout << endl;
    return 0;
}
