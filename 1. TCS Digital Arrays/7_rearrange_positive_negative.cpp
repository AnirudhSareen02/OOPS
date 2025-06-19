/*rearrange -ve and +ve nums in array so that, they are alterntive*/
#include<bits/stdc++.h>
using namespace std;

void rightrotate(int arr[], int start, int end){
    int temp = arr[end];

    for (int i = end; i >start; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[start] = temp;
}

void rearrange(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((i % 2 == 0 && arr[i] < 0) || (i % 2 == 1 && arr[i] >= 0)) {
            int j = i + 1;

            while (j < n) {
                if ((i % 2 == 0 && arr[j] >= 0) || (i % 2 == 1 && arr[j] < 0)) {
                    break;
                }
                j++;
            }
            if (j == n) break;
            rightrotate(arr, i, j);
        }
    }
}

int main(){
    int arr[] = {1,-3,-9,8,-7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rearrange(arr, n);

     cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}