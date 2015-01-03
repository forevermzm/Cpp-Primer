#include <iostream>

using std::cout;

int main() {
    char ch = 'a';
    unsigned char ch1 = 'a';
    int a = 3;
    long b = 4L;
    long long c = 4LL;

    cout << sizeof( ch ) << "\n";
    cout << sizeof( ch1 ) << "\n";
    cout << sizeof( a ) << "\n";
    cout << sizeof( b ) << "\n";
    cout << sizeof( c ) << "\n";

    return 0;
}
