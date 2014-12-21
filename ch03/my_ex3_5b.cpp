#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;

    getline( cin, line );
    string::size_type end = 0;

    while ( end < line.size() ) {
        string temp;
        while ( line[ end ] != ' ' && line[ end ] != '\0' ) {
            temp += line[ end++ ];
        }
        cout << temp << endl;
        end ++;
    }

    return 0;
}