#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,87,69,52};
    int second = INT_MIN;
    int first = INT_MIN;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]>first)
        {
            second = first;
            first = arr[i];
        } else if (arr[i]>second && arr[i]<first)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "Second largest element doesn't exist";
    } else {
        cout << "Second largest element is: " << second;
    }
        return 0;
}