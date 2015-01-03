#include <iostream>
#include <string>

using std::string;
using std::cout;

bool containsCap( const string &s ) {
    for (auto ch : s) {
        if ( 'A' <= ch && ch <= 'Z' ) {
            return true;
        }
    }
    return false;
}

void changeAllToLower( string &s ) {
    auto diff = 'A' - 'a';
    for ( auto & ch : s ) {
        if ( 'A' <= ch && ch <= 'Z' ) {
            ch -= diff;
        }
    }
}

int main(int argc, char *argv[])
{
    string s = "Hello World\n";
    cout << containsCap( s  ) << "\n";
    changeAllToLower( s );
    cout << s;

    return 0;
}
