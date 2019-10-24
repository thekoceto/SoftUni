#include <iostream>
#include <vector>

int main()
{
    int number;
    std::cin >> number;

    for (int i = 0; i < number; ++i){
        for (int j = 0; j < number; ++j){
            for (int k = 0; k < number; ++k){
                std::cout << (char)(i+97) << (char)(j+97) << (char)(k+97) << std::endl;
            }
        }
    }

    return 0;
}
