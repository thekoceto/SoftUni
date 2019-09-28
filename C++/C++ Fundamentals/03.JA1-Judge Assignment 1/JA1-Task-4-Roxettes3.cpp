#include <iostream>
#include <iomanip>

uint8_t readOneByte()
{
    char ch;
    std::cin >> ch;
    ch -= (ch >= '0' && ch <= '9') ? 48 : 0;
    ch -= (ch >= 'a' && ch <= 'f') ? 87 : 0;

    return (uint8_t)ch;
}

void readAndSetInput (uint32_t & multiVar)
{
    multiVar = (multiVar & ~(0xff << 20)) | ((readOneByte() & 0xff ) << 20);
}


int main()
{
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    
    uint32_t multiVar = 0x50000000;
    
    while (true){
        readAndSetInput (multiVar);
        if (((multiVar >> 20) & 0xFF) == 46) break;
        multiVar = (multiVar & ~(0xf << 28)) | ((((multiVar >> 28) & 0xF) - 1 & 0xf ) << 28);
        multiVar ^= ((multiVar >> 20) & 0xFF) << ((multiVar >> 28) & 0xF)*4;
        if (((multiVar >> 28) & 0xF) == 0) multiVar = (multiVar & ~(0xf << 28)) | 0x5 << 28;
    }
    
    multiVar &= ~(0xfff << 20);
    std::cout << std::hex << std::setfill ('0') << std::setw (5) << multiVar;
    
    return 0;
}
