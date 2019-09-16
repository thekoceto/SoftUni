#include <iostream>
using namespace std;

int main (){
    double dogs;
    double animals;

    cin >> dogs;
    cin >> animals;

    double price = dogs * 2.50 + animals * 4;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << " lv." << endl;
}

