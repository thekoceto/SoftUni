#include <iostream>
#include <iomanip>
#define sizeDNA 5

uint8_t readOneChar()
{
    char ch;
    std::cin >> ch;
    ch -= (ch >= '0' && ch <= '9') ? 48 : 0;
    ch -= (ch >= 'a' && ch <= 'f') ? 87 : 0;
    return (uint8_t)ch;
}

int main()
{
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);

    uint8_t i = sizeDNA;
    uint32_t result = 0;

    while (true){
        uint8_t input = readOneChar();
        if (input==46) break;
        result ^= input<<--i*4;
        i = i==0?sizeDNA:i;
    }

    std::cout << std::setfill('0') << std::setw(sizeDNA) << std::hex << result;
    return 0;
}
