#include <iostream>
using namespace std;

int main (){
    double input;
    cin >> input;

    double price = input * 7.61;
    double discount = price * 0.18;
    price -= discount;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The final price is: "<< price << " lv." << endl;
	cout << "The discount is: "<< discount << " lv." << endl;
}
