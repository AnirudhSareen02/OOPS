/*merge sort*/
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int l1 = mid - low +1;
    int l2 = high - mid;

    int left[l1], right[l2];

/*data copying in 2 newly created arrays*/
    for (int  i = 0; i < l1; i++)
    {
        left[i] = arr[low+i];
    }
    for (int i = 0; i < l2; i++)
    {
        right[i] = arr[mid + 1 + i];
    }
    
    int i = 0, j = 0, k = low;

        while (i < l1 && j < l2) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
        while (i < l1)
        arr[k++] = left[i++];
    while (j < l2)
        arr[k++] = right[j++];
}

void mergesort(int arr[], int low, int high){
    
    if(low<high){

        int mid = (low+high)/2;
        
        mergesort(arr, low, mid);
        mergesort(arr, mid +1, high);

        merge(arr, low, mid, high);
    }
}

int main(){
    int arr[] = {4,8,3,1,7,5,2,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergesort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}