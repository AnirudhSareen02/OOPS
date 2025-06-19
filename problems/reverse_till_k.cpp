/*input = {1,2,3,4,5,6,7}, k= 3, output = {5,6,7,1,2,3,4}*/
#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while (start<end)
    {
        int temp= arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}

/*rotate array k steps to the right*/
void rotate(int arr[], int n, int k){
    reverse(arr, 0, n-1); /*reverse entire array*/ /*{7,6,5,4,3,2,1}*/
    reverse(arr, 0, k-1); /*reverse the first k elements*/ /*{5,6,7,4,3,2,1}*/
    reverse(arr, k, n-1);/*reverse the remaining, non k elements*/ /*{5,6,7,1,2,3,4}*/
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    int k=3;

    rotate(a,n,k);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

/*another way to solve this is by using linked lists*/

/*void reverse(int nums[], int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
} this is also valid, it has inbuilt swap function, we are doing manually in our code*/