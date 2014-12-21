#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string s;
    cin >> s;
    for ( auto & ch : s ){
        ch = 'X';
    }
    cout << s;
    return 0;
}
