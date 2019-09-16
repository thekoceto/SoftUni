#include <iostream>
#include <cmath>

using namespace std;

int main (){
    double length, width, side;

    cin >> length >> width >> side;

    double area_wardrobe = (length*100)*(width*100);
    double area_hall = (side*100)*(side*100);
    double area_bench = area_wardrobe/10;

    double free_space = area_wardrobe - area_hall - area_bench;
    double dancer = free_space/(40+7000);

    //cout <<  dancer << endl;
    cout <<  floor(dancer) << endl;

    return 0;
}
