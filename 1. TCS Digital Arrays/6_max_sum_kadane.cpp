/*find the maximum sum for given array using kadane's algorithm*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,-8,7,6,-9,1,8,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum+= arr[i];

        if(currsum>maxsum){
            maxsum = currsum;
        }

        if(currsum<0){
            currsum = 0;
        }
    }

    cout<<"max sum is: "<<maxsum;
    
}