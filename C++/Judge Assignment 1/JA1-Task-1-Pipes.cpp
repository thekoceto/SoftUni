#include <iostream>
#include <vector>
#include <bits/stdc++.h>

std::vector <int> readInput(int numberOfPipes)
{
    std::vector<int> vec(numberOfPipes);

    for (int i=0; i<numberOfPipes; ++i){
        std::cin >> vec[i];
    }
    return vec;
}

int calculateLifeOfPipes (int installation, int checkup)
{
    int lifeOfPipe = 0;
    int damage = installation - checkup;
    int total = installation;

    while (true){
        total -= damage ;
        if (total<0){
            break;
        }
        lifeOfPipe++;
    }
    return lifeOfPipe;
}

int main()
{
    int numberOfPipes = 0;
    std::cin >> numberOfPipes;

    std::vector<int> checkup = readInput(numberOfPipes);
    std::vector<int> installation = readInput(numberOfPipes);

    std::vector<int> lifetimes (numberOfPipes);

    for (int i=0; i<numberOfPipes; ++i){
        lifetimes[i] = calculateLifeOfPipes( installation[i],checkup[i]);
        std::cout << lifetimes[i] << " ";
    }
}
