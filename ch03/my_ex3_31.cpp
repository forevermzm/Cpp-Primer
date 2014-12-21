#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int array[ 10 ];
    int i = 0;
    for ( auto &value : array ) {
        value = i ++; 
    }

    for ( auto value: array ) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
