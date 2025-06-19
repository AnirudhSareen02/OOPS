#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 3, 4, 5};
    int max = 0;
    int sum = 0;
    int add = 0;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for (int i = 1; i <= max; i++) {
        sum += i;
    }

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        add += arr[i];
    }

    cout << "missing number is: " << sum - add;
}
