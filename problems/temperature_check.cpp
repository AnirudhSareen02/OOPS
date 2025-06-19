#include <bits/stdc++.h>
using namespace std;

vector<int> temp(int n, vector<int>& days) {  // Change return type to vector<int>
    vector<int> count(n, 0);
    n = days.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (days[j] > days[i]) {  // Correct comparison to find the next warmer day
                count[i] = j - i;
                break;
            }
        }
    }
    return count;  // Return the vector with results
}

int main() {
    vector<int> day = {6, 7, 5, 4, 8, 6, 3, 2, 9};
    int n = day.size();

    vector<int> result = temp(n, day);

    // Print the result
    for (int r : result) {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}
