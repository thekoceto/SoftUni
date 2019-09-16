#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int days, cooks, cakes, wafers, pancakes;

    cin >> days >> cooks >> cakes >> wafers >> pancakes;

    double cakesSum = cakes*45;
    double wafersSum = wafers*5.80;
    double pancakesSum = pancakes*3.20;

    double totalSum = (cakesSum + wafersSum + pancakesSum) * cooks * days;

    totalSum *= 0.875;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout <<  totalSum << endl;

    return 0;
}
