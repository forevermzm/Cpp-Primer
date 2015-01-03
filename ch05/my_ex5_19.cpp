#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main(int argc, char *argv[])
{
    string rsp;
    do {
        string str1;
        string str2;
        cin >> str1 >> str2;
        cout << ( str1 < str2 ? str1 : str2 ) << " is less than " << ( str1 < str2 ? str2 : str1 ) << "\n\n";
        cout << "More to compare? yes or no\n";
        cin >> rsp;
    } while( !rsp.empty() && rsp[0] != 'n' );

    return 0;
}
