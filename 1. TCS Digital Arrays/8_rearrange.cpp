/*same as 7th question but number of +ve and -ve are not equal*/
#include<bits/stdc++.h>
using namespace std;

void rightrotate(int arr[], int start, int end){
    int temp;

    temp = arr[end];
    for (int i = end; i > start; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[start] = temp;
}

void rearrange(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if((i % 2 == 0 && arr[i]<0) || (i % 2 == 1 && arr[i]>=0)){
            int j = i+1;

            while (j<n)
            {
                if((i % 2 == 0 && arr[j]>=0) || (i % 2 == 1 && arr[j]<0)){
                    break;
                }
                j++;
            }
            if(j == n){
                break;
            }
            rightrotate(arr, i, j);
        }
    }   
}

int main(){
    int arr[] = {1, -9, -8, 5, 6, -9, 6, 2,-6, 8, 69, 23};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}