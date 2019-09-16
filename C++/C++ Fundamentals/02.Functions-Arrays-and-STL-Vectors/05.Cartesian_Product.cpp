#include <iostream>
using namespace std;

int main() {

    int length;
    cin >> length;
    int arr[length] = {0};

    for(int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            cout << arr[i]*arr[j] << " ";
        }
    }
}
