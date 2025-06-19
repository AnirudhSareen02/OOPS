#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    // Input elements into the array
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i]; 
    }
    
    int *p = arr;
    int *q = arr + n - 1; // Point q to the last element of the array

    // Swap elements using pointers
    while (p <= q) { // Corrected the loop condition
        int temp = *p;
        *p = *q;
        *q = temp;
        p++; // Increment p, shifts it to next element
        q--; // Decrement q, shifts to previous element
    }

    // Output the reversed array
    cout << "Reversed array: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
