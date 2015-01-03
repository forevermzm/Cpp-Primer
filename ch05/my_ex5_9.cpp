#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while ( cin >> ch ) {
        if ( ch == 'a' ) {
            aCnt ++;
        } else if ( ch == 'e' ) {
            eCnt ++;
        } else if ( ch == 'i' ) {
            iCnt ++;
        } else if ( ch == 'o' ) {
            oCnt ++;
        } else if ( ch == 'u' ) {
            uCnt ++;
        } else {
             //break;
        }
    }
    printf( "%d %d %d %d %d\n", aCnt, eCnt, iCnt, oCnt, uCnt );

    return 0;
}
