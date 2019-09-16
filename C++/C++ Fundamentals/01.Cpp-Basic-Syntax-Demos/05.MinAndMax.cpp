#include <iostream>
#include <cmath>

int main ()
{
    int  loop;
    float current, minValue=INT_MAX, maxValue=INT_MIN;

    std::cin >> loop;

    for (int i=0; i<loop; i++){
        std::cin >> current;
        if (current>maxValue){
            maxValue=current;
        }
        if (current<minValue){
            minValue=current;
        }
    }
    std::cout << minValue << " " << maxValue;
    return 0;
}
