#include <iostream>
#include <vector>
#include <bits/stdc++.h>

std::vector<std::vector<int>> readInput(int row_size, int col_size)
{
    std::vector<std::vector<int>> vec(col_size, std::vector<int>(row_size));

    for (int col_loop = 0; col_loop < col_size; ++col_loop)
        for (int row_loop = 0; row_loop < row_size; ++row_loop)
            std::cin >> vec[col_loop][row_loop];

    return vec;
}

int main()
{
    int row_size = 0, col_size = 0, modulo = 0;
    std::cin >> col_size >> row_size;

    std::vector<std::vector<int>> inputVec(col_size, std::vector<int>(row_size));
    inputVec = readInput(row_size, col_size);

    std::vector<int> result(row_size);

    std::cin >> modulo;

    for (int row_loop = 0; row_loop < row_size; ++row_loop){
        int sum = 0;
        for (int col_loop = 0; col_loop < col_size; ++col_loop){
            sum += inputVec[col_loop][row_loop];
        }
        result[row_loop] = sum % modulo;
        std::cout << result[row_loop] << " ";
    }
}
