#include <iostream>
#include <vector>

int main()
{
    int number;
    std::cin >> number;
    number = number>0 ? number : -1*number;

    int oddSum = 0;
    int evenSum = 0;

    while(number>0)
    {
        int lastDigit = number%10;

        if (lastDigit&1)
            oddSum+=lastDigit;
        else
            evenSum+=lastDigit;
        number /= 10;
    }
    std::cout << oddSum*evenSum;
}
