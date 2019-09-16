#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int tables;
    double length, width;

    cin >> tables >> length >> width;

    double square = tables*(length+0.6)*(width+0.6);
    double rectangle = tables*(length/2)*(length/2);

    double priceUSD = square*7 + rectangle*9;
    double priceBGN = priceUSD * 1.85;


    cout.setf(ios::fixed);
    cout.precision(2);

    cout <<  priceUSD << " USD" << endl;
    cout <<  priceBGN << " BGN" << endl;
}
