/*insertion sort*/
#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n){
    int i,j,x;

    for (int i = 1; i < n; i++)
    {
        j = i-1;
        x = arr[i];
        while (j>-1 && arr[j]>x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
    
}

int main(){
    int arr[] = {5,7,4,2,8,1,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    }