#include <iostream>

using namespace std;

# define PI           3.14159265358979323846  /* pi */

int main (){
    double r;
    cin >> r;

    double area = PI*r*r;
    double perimeter = 2*PI*r;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    cout << perimeter;
}
