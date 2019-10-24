#include <iostream>
using namespace std;

int main()
{
    double tourPrice, orderPrice;
    double puzzles, talkingDolls, teddyBears, minions, trucks;

    cin >> tourPrice >> puzzles >> talkingDolls;
    cin >> teddyBears >> minions >> trucks;

    orderPrice = puzzles * 2.60;
    orderPrice += talkingDolls * 3.00;
    orderPrice += teddyBears * 4.10;
    orderPrice += minions * 8.20;
    orderPrice += trucks * 2.00;

    if (puzzles + talkingDolls + teddyBears + minions + trucks >=50)
        orderPrice *= 0.75;

    double rent = orderPrice/10;
    double rest = orderPrice-rent;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (rest>=tourPrice)
        cout << "Yes! " << rest-tourPrice << " lv left." << endl;
    else
        cout << "Not enough money! " << tourPrice-rest << " lv needed." << endl;

    return 0;
}
