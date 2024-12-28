#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {5, -3, 8, -7, 2, -6, 1, -4, 9, -2};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Sum of Array: " << sumOfArray(arr, n) << endl;
}