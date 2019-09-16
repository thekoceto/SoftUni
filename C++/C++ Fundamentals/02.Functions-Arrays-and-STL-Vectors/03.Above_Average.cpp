#include <iostream>
using namespace std;

int main(){
    int length, sum = 0, average = 0;

    cin >> length;
    int arr[length] = {0};

    for (int i = 0; i < length; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    average = sum / length;
    for (int i = 0; i < length; i++){
        if (arr[i]>=average){
            cout << arr[i] << " ";
        }
    }
}
