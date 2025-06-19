/*quick sort*/
#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;

    do
    {
        do{i++;} while(arr[i]<=pivot);
        do{j--;} while(arr[j]>pivot);

        if (i<j)
        {
            swap(arr[i], arr[j]);
        }
        
    } while (i<j);
        swap(arr[low], arr[j]);
        return j;
}

void quick(int arr[], int low, int high){
    int j;

    if (low<high)
    {
        j = pivot(arr, low, high);
        quick(arr, low, j);
        quick(arr, j+1, high);
    }
    
}

int main(){
    
}