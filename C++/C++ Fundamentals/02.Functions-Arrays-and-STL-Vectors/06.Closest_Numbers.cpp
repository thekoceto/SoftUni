#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    sort(a,a+n);
    int diff[n];
    adjacent_difference(a,a+n,diff);
    int min=*min_element(diff+1,diff+n);

    cout << min;
}
