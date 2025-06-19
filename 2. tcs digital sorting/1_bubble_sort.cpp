/*bubble sort*/
#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-1-i; j++) /*n-1-i is because after each swap, number if elements is decreased by i*/
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag += 1;
            }
        }
        if(flag == 0) break;
    }
    
}

int main(){
    int arr[] = {5,2,3,6,7,8,1,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}