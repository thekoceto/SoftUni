#include <iostream>
#include <cmath>
using namespace std;

//# define PI           3.14159265358979323846  /* pi */

int main (){
    double radians;

    cin >> radians;

    double degrees = radians * 180 / M_PI;

    cout <<  round(degrees) << endl;
}
