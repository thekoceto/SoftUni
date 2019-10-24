#include <iostream>
#include <vector>
#include <bits/stdc++.h>

std::vector <int> readInput()
{
    std::vector<int> vec(2);

    for (int i=0; i<2; ++i){
        std::cin >> vec[i];
    }
    return vec;
}

int calculateOperation (const char operation, const std::vector<int>& numbers)
{
    int result = INT_MIN;

    switch(operation)
    {
        case '+':
            result = numbers[0]+numbers[1];
            break;
        case '-':
            result = numbers[0]-numbers[1];
            break;
        case '*':
            result = numbers[0]*numbers[1];
            break;
        case '/':
            if (numbers[1]!=0) result = numbers[0]/numbers[1];
            else std::cout << "error" << std::endl;
            break;
        default:
            std::cout << "try again" << std::endl;
            break;
    }

    return result;
}

int main()
{
    const std::vector<int> vec = readInput();

    char operation = '\0';
    int result = INT_MIN;

    while(result == INT_MIN)
    {
        std::cin >> operation;
        result = calculateOperation(operation,vec);
    }

    std::cout << result;

    return 0;
}
