#include <iostream>
#include <vector>

std::vector <int> readInput()
{
    int size = 0;
    std::cin >> size;
    std::vector<int> vec(size);

    for (int i=0; i<size; ++i){
        std::cin >> vec[i];
    }
    return vec;
}
int findIndex (const int number, const std::vector<int>& numbers)
{
    int result = -1;
    const int SIZE = numbers.size();

    for (size_t i = 0; i < SIZE; ++i){
        if (numbers[i]==number){
            result = i;
            break;
        }
    }
    return result;
}

int main()
{
    const std::vector<int> vec = readInput();
    int number = 0;
    std::cin >> number;

    std::cout << findIndex(number, vec);

    return 0;
}
