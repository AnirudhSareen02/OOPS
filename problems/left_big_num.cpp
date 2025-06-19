/*give the count of numbers which are greater than their left counterparts*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={7,5,8,6,2,9,5,6,10};
    int count = 1;
    int n= sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];

    for(int i=1;i<n; i++){
       if(arr[i]>max){
        count++;
        max=arr[i];
       }
    }
    cout<< count;
}