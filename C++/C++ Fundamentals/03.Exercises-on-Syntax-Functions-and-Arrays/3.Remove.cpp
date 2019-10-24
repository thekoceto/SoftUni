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
void printWithoutNumbers ( const std::vector<int>& numbers, const int numberToRemove)
{
    for (int num : numbers)
    {
        if (num != numberToRemove)
        {
            std::cout << num << " ";
        }
    }
}

int main()
{
    const std::vector<int> vec = readInput();
    int number = 0;
    std::cin >> number;

    printWithoutNumbers(vec, number);
    return 0;
}
