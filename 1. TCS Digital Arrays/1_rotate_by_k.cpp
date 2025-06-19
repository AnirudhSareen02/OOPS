#include<bits/stdc++.h>
using namespace std;
 
void reversal(int arr[], int start, int end){
    while (start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }   
}
 
int main(){
 
    int n, k;
    
    cout<<"enter the number of elements: ";
    cin>>n;
        int arr[n];
        cout<<"enter the elements: ";
            for(int i=0; i<n; i++){
            cin>>arr[i];
        }
 
    cout<<"enter the k: ";
    cin>>k;
    
    k = k % n;
    
    reversal(arr, 0, n-1);
    reversal(arr, 0, k-1);
    reversal(arr, k, n-1);
    
    /*now to print*/
    cout<<"the reversed elemts are: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}