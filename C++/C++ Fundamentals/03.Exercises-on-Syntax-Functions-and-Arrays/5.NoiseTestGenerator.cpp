#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

char getRandomChar()
{
    //char c = rand()%255;
    char c = 32 + rand()%96; //128 - 32
    return c;
}

int main()
{
    srand (time(NULL));

    char ch = 0;
    int countDigit=0;

    do
    {
        ch = getRandomChar();

        while (ch=='.'&& countDigit==0)
        {
            ch = getRandomChar();
        }
        if (isdigit(ch))
        {
            ++countDigit;
        }

        std::cout << ch;

        if (countDigit>8)
        {
            ch=='.';
        }
    }while(ch!='.');
}
