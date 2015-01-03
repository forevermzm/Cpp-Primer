#include <iostream>
#include <string>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::runtime_error;

int main(int argc, char *argv[])
{
    int x, y;
    while ( cin >> x >> y ) {
        try {
            if ( y == 0 ) {
                throw runtime_error( "The divider cannot be zero.\n" );
            } else {
                cout << x << " divide " << y << " is " << x / y << endl;
                break;
            }
        } catch ( runtime_error err ) {
            cout << err.what();
            string decision;
            cout << "Do you want to input another two integers? Y or N?";
            cin >> decision;
            if ( cin.eof() || decision[0] == 'N' ) {
                break;
            }
        }
    }

    return 0;
}
