#include <iostream>
using namespace std;

int main() {

    int n, arr[10] = {0}, mostFrequent = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[input]++;
        mostFrequent = arr[input] > mostFrequent ? arr[input] : mostFrequent;
    }

    for(int i = 0; i < 10; i++){
        if(arr[i] == mostFrequent) cout << i << " ";
    }

    return 0;
}
