#include <iostream>
#include <cmath>

using namespace std;

int main (){
    double whiskeyPrice, beerLiters, wineLiters;
    double rakiLiters, whiskeyLiters;

    cin >> whiskeyPrice >> beerLiters >> wineLiters;
    cin >> rakiLiters >> whiskeyLiters;

    double rakiPrice = whiskeyPrice/2;
    double winePrice = rakiPrice*0.6; // 1-0.4
    double beerPrice = rakiPrice*0.2; // 1-0.8

    double totalSum = whiskeyPrice*whiskeyLiters;
    totalSum += rakiPrice*rakiLiters;
    totalSum += winePrice*wineLiters;
    totalSum += beerPrice*beerLiters;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout <<  totalSum << endl;

    return 0;
}
