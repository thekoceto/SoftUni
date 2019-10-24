#include <iostream>
#include <vector>
#include <cmath>

std::vector <int> readInput()
{
    std::vector<int> vec;

    char ch = 0;
    while(ch!='.')
    {
        std::cin >> ch;

        vec.push_back(ch);
    }

    return vec;
}
size_t extractDigitInVector (const std::vector<int>& symbols)
{
    std::vector<int> digit;

    for (char symbol : symbols)
    {
        if (isdigit(symbol))
        {
            digit.push_back(symbol - '0');
        }
    }

    int vectorSize = digit.size();
    size_t result = 0;

    for (int i = 0; i<vectorSize; ++i)
    {
        result += digit[i];
        if (i!=vectorSize-1) result *= 10;
    }

    return result;
}

int main()
{
    const std::vector<int> vec = readInput();
    int number = 0;
    std::cin >> number;
    double result = sqrt(extractDigitInVector(vec));
    std::cout << result;
    return 0;
}//[mDHpmJ_,2o"w9"lOwzm/HrBu$REdt1Ag#8*W8(J_d^]WwcLWo+ 4nTR5%[=Wt,hx0>%OD=x~U'\JJ<#Kl/=?kb[#aQt%[ngT4M"Y$`bjZF\[%\8z#,RQ48v0qODlMl=-?U~r[$-5a%2P4_H .
