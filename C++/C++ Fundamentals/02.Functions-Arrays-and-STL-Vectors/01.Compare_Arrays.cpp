#include <iostream>

using namespace std;

bool areEqual(int arr1[], int length1, int arr2[], int length2);

int main(){
    int first, second;

    cin >> first;
    int firstArr[first] = {0};

    for (int i = 0; i < first; i++){
        cin >> firstArr[i];
    }

    cin >> second;
    int secondArr[second] = {0};

    for (int i = 0; i < second; i++){
        cin >> secondArr[i];
    }

    if (areEqual(firstArr, first, secondArr, second))
        cout << "equal";
    else
        cout << "not equal";
}

bool areEqual(int arr1[], int length1, int arr2[], int length2){
    if (length1!=length2)
        return false;
    else{
        for (int i = 0; i < length1; i++){
            if (arr1[i]!=arr2[i])
                return false;
        }
    }
    return true;
}
