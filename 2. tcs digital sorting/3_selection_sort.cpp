/*selection sort*/
#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int k = i;
        for (int j=i; j < n; j++)
        {
            if (arr[j]<arr[k])
            {
                k = j;
            }
        }
        swap(arr[i], arr[k]);
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}