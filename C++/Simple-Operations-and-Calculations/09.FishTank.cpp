#include <iostream>
using namespace std;

int main (){
    int length;
    int width;
    int height;
    double percent;

    cin >> length >> width >> height >> percent;

    double volume = length * width * height;
    volume *= 0.001;
    percent *= 0.01;

    volume *=  (1-percent);

    cout.setf(ios::fixed);
    cout.precision(3);

    cout <<  volume << endl;
}
