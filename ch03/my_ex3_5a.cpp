#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str;
    string result;
    while ( cin >> str ) {
        result += str;
    }
    cout << result << endl;

    return 0;
}