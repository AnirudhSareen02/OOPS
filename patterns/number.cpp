#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    int i = 1; // Initialize i
    while (i <= rows) {
        int j = 1; // Initialize j at the beginning of each row
        while (j <= i) {
            cout << j<<" "; // Print the value of j
            j++;
        }
        cout << endl; // Move to the next line after each row
        i++;
    }
    return 0;
}
