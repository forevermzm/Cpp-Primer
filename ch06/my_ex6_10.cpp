#include <iostream>

using std::cout;

void swap( int *p, int *q ) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(int argc, char *argv[])
{
    int a = 0, b = 42;
    swap( &a, &b );

    cout << "a is: " << a << ", b is: " << b << "\n";

    return 0;
}
