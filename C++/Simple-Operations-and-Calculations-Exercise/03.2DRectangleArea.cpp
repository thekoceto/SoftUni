#include <iostream>
#include <cmath>

using namespace std;

int main (){
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    double square = abs(x1-x2)*abs(y1-y2);
    double rectangle = abs(x1-x2)*2+abs(y1-y2)*2;


    cout.setf(ios::fixed);
    cout.precision(2);

    cout <<  square << endl;
    cout <<  rectangle << endl;
}
