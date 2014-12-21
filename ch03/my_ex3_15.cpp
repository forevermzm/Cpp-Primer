#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector< string > array;
    string str;
    while ( cin >> str ){
        array.push_back( str );
    }
    
    for ( auto str : array ){
        cout << str << " ";
    }
    cout << endl;
    return 0;
}
