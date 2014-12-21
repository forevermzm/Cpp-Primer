#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector< string > strArray;
    string line;
    while ( cin >> line ){
        for ( auto & ch : line ){
            ch = toupper( ch );
        }
        strArray.push_back( line );
    }
    int count = 0;
    for ( auto str : strArray ){
        count ++;
        cout << str << " ";
        if ( count % 8 == 0 ) {
            cout << endl;
        } 
    }

    return 0;
}
