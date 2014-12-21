#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector< int > array;
    int number;
    while ( cin >> number ){
        array.push_back( number );
    }

    for ( auto num : array ){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
