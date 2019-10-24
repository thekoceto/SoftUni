#include <iostream>
using namespace std;

# define PI           3.14159265358979323846  /* pi */

int main(){
    string figure;
    cin >> figure;

    cout.setf(ios::fixed);
    cout.precision(3);

    if (figure=="square"){
        double side;
        cin >> side;
        cout <<  side*side << endl;
    } else if (figure=="rectangle"){
        double side1, side2;
        cin >> side1 >> side2;
        cout << side1*side2 << endl;
    } else if (figure=="circle"){
        double radius;
        cin >> radius;
        cout << radius*radius*PI << endl;
    } else if (figure=="triangle"){
        double base, height;
        cin >> base >> height;
        cout << base*height/2 << endl;
    }

    return 0;
}
