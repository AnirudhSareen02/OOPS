#include<iostream>
using namespace std;

int main(){
    int arr[]={1,5,8,7,4,6,3,2,1,49,10};
    int val = 55;

    int sum = 0;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        for (int j = 1; j < i; j++)
        {
            if (arr[i] + arr[j] == val)
            {
                cout<<i<<" "<<j;
            }
        }
    }
}