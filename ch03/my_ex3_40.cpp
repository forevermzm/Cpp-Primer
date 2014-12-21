#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    const char str1[] = "Hello";
    const char str2[] = "World";

    auto size = strlen( str1 ) + strlen( str2 ) + 1;
    char str3[ size ];
    strcpy( str3, str1 );
    strcat( str3, str2 );

    cout << str1 << " " << str2 << " " << str3 << endl;

    return 0;
}
