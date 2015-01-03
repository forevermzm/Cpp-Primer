#include <iostream>
#include <bitset>

int main() {
    char temp = ~'q';
    int result = ~'q' << 6;

    std::cout << temp << "\n";
    std::cout << std::bitset< 8 >( temp ) << "\n";
    std::cout << result << "\n";
    std::cout << std::bitset< 32 >( result ) << "\n";

    return 0;
}
