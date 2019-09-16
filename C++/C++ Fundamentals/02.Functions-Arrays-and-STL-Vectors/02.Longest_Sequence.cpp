#include <iostream>

using namespace std;

int main(){
    int length, counter = 1, maxCounter = 1, maxElement = INT_MIN;

    cin >> length;
    int arr[length] = {0};

    for (int i = 0; i < length; i++){
        cin >> arr[i];

        if (i!=0 && arr[i] == arr[i-1]){
            counter++;
            if (counter>=maxCounter){
                maxElement = arr[i];
                maxCounter = counter;
            }
        }else if(maxCounter == 1){
            maxElement = arr[i];
        }else{
            counter = 1;
        }
    }
    for (int i = 0; i < maxCounter; i++)
        cout << maxElement << " ";
}
