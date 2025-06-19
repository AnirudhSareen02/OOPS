#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize 10 bulbs, all turned on (1)
    vector<bool> bulbs(10, true);

    // Simulate the process of switching bulbs off based on the rules
    for (int turn = 2; turn <= 10; ++turn) {
        for (int i = turn - 1; i < 10; i += turn) {
            bulbs[i] = !bulbs[i];  // Toggle the bulb (on to off, or off to on)
        }
    }

    // Print the final state of the bulbs
    cout << "Final state of bulbs:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Bulb " << i + 1 << ": " << (bulbs[i] ? "On" : "Off") << endl;
    }

    return 0;
}
