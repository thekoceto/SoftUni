#include <iostream>

int main ()
{
    int num1, num2, gcd;

    std::cin >> num1 >> num2;

    for(int i=1; i <= (num1>num2 ? num1 : num2); ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    std::cout << gcd;
    return 0;
}
