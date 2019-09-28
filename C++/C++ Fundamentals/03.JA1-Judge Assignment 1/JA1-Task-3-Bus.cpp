#include <iostream>
#include <vector>
#include <bits/stdc++.h>

std::vector <int> readInput(int numberOfBuses)
{
    std::vector<int> vec(numberOfBuses);

    for (int i=0; i<numberOfBuses; ++i){
        std::cin >> vec[i];
    }
    return vec;
}

int waitingTimeCalculation (int trainTime, int busTime)
{
    int result = 0;
    for (int i = trainTime ; i < busTime; ++i){
        if (i>2359) i = 0;
        if (i%60==0) i+=40;
        ++result;
    }

    return result;
}

int main()
{
    int numberOfBuses, trainLeavesTime, selectedBus = 0, waitingTime = INT_MAX;
    std::cin >> numberOfBuses;

    std::vector<int> busArrivalTime = readInput(numberOfBuses);

    std::cin >> trainLeavesTime;

    for (int i=0; i<numberOfBuses; ++i){
        int currentWaitingTime = waitingTimeCalculation(busArrivalTime[i],trainLeavesTime);
        selectedBus = currentWaitingTime < waitingTime ? i+1 : selectedBus;
    }
    std::cout << selectedBus;
}
