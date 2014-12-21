#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector< int > intArray;
    for ( decltype( intArray.size()) i = 0; i < 10 ; i ++ ){
        intArray.push_back( i );
    }

    for ( auto it = intArray.begin() ; it != intArray.end() ; it ++ ){
        *it *= *it;
    }

    for ( auto it = intArray.cbegin() ; it != intArray.cend() ; it ++ ){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
