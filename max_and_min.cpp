#include <bits/stdc++.h>
using namespace std;

// Approach 1
//sort the array and return maximum = arr[n-1] and minimum = arr[0]
// Time Complexity: O(nlogn)

// Approach 2
// using Linear Search
// Time Complexity: O(n)

int getMaxElement(int arr[], int n){
    int maxElement = INT_MIN;
    for(int i=0; i<n; i++){
        maxElement = max(arr[i], maxElement);
    }
    return maxElement;
}

int getMinElement(int arr[], int n){
    int minElement = INT_MAX;
    for(int i=0; i<n; i++){
        minElement = min(arr[i], minElement);
    }
    return minElement;
}

int main(){
    int arr[] = {5, -3, 8, -7, 2, -6, 1, -4, 9, -2};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Max Element: " << getMaxElement(arr, n) << endl;
    cout << "Min Element: " << getMinElement(arr, n) << endl;
}