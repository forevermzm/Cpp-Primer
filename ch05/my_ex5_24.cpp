#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main(int argc, char *argv[])
{
    int x, y;
    cin >> x >> y;

    if ( y == 0 )
    {
        throw runtime_error( "The divider cannot be zero.\n" );
    }
    cout << x << " divide " << y << " is " << x / y << endl;

    return 0;
}
