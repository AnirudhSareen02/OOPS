#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxEnd = arr[0];
    int maxsofar = arr[0];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        maxEnd = max(arr[i], maxEnd + arr[i]);
        maxsofar = max(maxsofar, maxEnd);
    }

    cout<<"Max sum is: "<<maxsofar;
    return 0;
    
}