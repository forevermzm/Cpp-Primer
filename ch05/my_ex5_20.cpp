#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;


int main(int argc, char *argv[])
{
    string lastInput, input;
    while ( cin >> input ) {
        if ( lastInput == input ) {
            cout << "The repeated input is: " << input << "\n";
            break;
        }
        lastInput = input;
    }
    if ( cin.eof() ) {
        cout << "No word is repeated.\n";
    }

    return 0;
}
