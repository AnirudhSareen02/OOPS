#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,5,6,3,4,7,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int expected_sum = (n+1)*(n+2)/2 ;

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+= arr[i];
    }
    cout<<"missing number is: "<<expected_sum-sum;
}