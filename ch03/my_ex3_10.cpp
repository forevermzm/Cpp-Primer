#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string s;
    getline( cin, s );
    string result;
    for ( auto ch : s ){
        if ( !ispunct( ch ) ){
            result += ch;
        }
    }
    cout << result << endl;
    return 0;
}
