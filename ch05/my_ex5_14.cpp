#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::vector;

int main(int argc, char *argv[])
{
    vector< string > vec;
    string str;

    while ( cin >> str ) {
        vec.push_back( str );
    }

    auto beg = vec.cbegin();
    int dupCnt = 0, currentDupCnt = 1;
    string dupStr = "", currentDupStr = *beg;
    while( ++beg != vec.cend() ) {
        if ( *beg == currentDupStr ) {
            currentDupCnt += 1;
        } else {
            if ( dupCnt < currentDupCnt ) {
                dupCnt = currentDupCnt;
                dupStr = currentDupStr;
            }
            currentDupCnt = 1;
            currentDupStr = *beg;
        }
    }

    cout << dupStr << " " << dupCnt << "\n";

    return 0;
}
