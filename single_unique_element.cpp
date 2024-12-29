#include <bits/stdc++.h>
using namespace std;

// Approach
// using Bitwise XOR operator and Linear Search
// Time Complexity: O(n)

int uniqueElementInArray(int arr[], int n){
    int ans = 0;

    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,1,8,3,4,3,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unique Element: " << uniqueElementInArray(arr, n) << endl;
}