#include <iostream>
using namespace std;

int main (){
    double USD;

    cin >> USD;

    double BGN = USD * 1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout <<  BGN << endl;
}
