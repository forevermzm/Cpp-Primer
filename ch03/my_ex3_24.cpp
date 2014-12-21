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
    for ( auto it = intArray.cbegin() + 1 ; it != intArray.cend() ; it++ ){
        cout << (*( it - 1 )) + (*it) << " ";
    }
    cout << endl;
    auto round = intArray.size() / 2;
    for ( auto beg = intArray.cbegin(), end = intArray.cend() - 1 ; beg <= end ; beg ++, end -- ) {
        cout << *beg + *end << " ";
    }
    cout << endl;
    return 0;
}
