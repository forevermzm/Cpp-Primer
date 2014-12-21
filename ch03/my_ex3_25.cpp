#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector< int > grades( 11, 0 );
    unsigned grade;
    auto begin = grades.begin();
    while ( cin >> grade ) {
        if ( grade <= 100 ) {
            *( begin + ( grade / 10 )) += 1;
        }
    }
    for ( auto value : grades ) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
