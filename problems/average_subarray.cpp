#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is even without using the modulo operator
bool isEven(int num) {
    return (num & 1) == 0; // Using bitwise AND operation to check if the number is even
}

// Function to calculate the average of a subarray
double calculateAverage(const vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
    }
    return sum / static_cast<double>(arr.size());
}

// Function to check if the average of two subarrays is equal
bool checkEqualAverages(const vector<int>& arr) {
    // Ensure all elements in the array are even
    for (int i = 0; i < arr.size(); ++i) {
        if (!isEven(arr[i])) {
            cout << "The array contains odd numbers, which are not allowed." << endl;
            return false;
        }
    }

    // Split array into two subarrays a and b (can be of any size)
    vector<int> a, b;
    
    // Example: Split the array into two halves (or you can use a different strategy)
    for (int i = 0; i < arr.size(); ++i) {
        if (i < arr.size() / 2) {
            a.push_back(arr[i]);
        } else {
            b.push_back(arr[i]);
        }
    }

    // Ensure both subarrays are non-empty
    if (a.empty() || b.empty()) {
        cout << "At least one subarray is empty." << endl;
        return false;
    }

    // Calculate the averages of both subarrays
    double avgA = calculateAverage(a);
    double avgB = calculateAverage(b);

    // Compare the averages and return the result
    return avgA == avgB;
}

int main() {
    vector<int> arr = {2, 4, 6, 8};  // Example array of even numbers

    if (checkEqualAverages(arr)) {
        cout << "The averages of the two subarrays are equal." << endl;
    } else {
        cout << "The averages of the two subarrays are not equal." << endl;
    }
    return 0;
}
