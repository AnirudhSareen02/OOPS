#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct Registration {
    string place;
    string date;
    string state;
    int males;
    int females;
};

int main() {

    vector<Registration> registrations = {
        {"Chandigarh", "24-01-2025", "Chandigarh", 5, 6},
        {"Rajpura", "02-01-2025", "Punjab", 2, 3},
        {"Rohtak", "11-01-2025", "Haryana", 6, 4},
        {"Saneta", "19-01-2025", "Punjab", 3, 2},
        {"Raipur", "06-01-2025", "Chhattisgarh", 2, 3},
        {"Ropar", "09-01-2025", "Punjab", 6, 4}
    };


    int totalMalesInPunjab = 0;
    for (auto& reg : registrations) {
        int day = stoi(reg.date.substr(0, 2));
        if (day >= 1 && day <= 15 && reg.state == "Punjab") {
            totalMalesInPunjab += reg.males;
        }
    }
    cout << "Total males who registered in Punjab (1-01-2025 to 15-01-2025): " << totalMalesInPunjab << endl;

    cout << "Places with registrations > 5 (1-01-2025 to 15-01-2025):\n";
    for (auto& reg : registrations) {
        int day = stoi(reg.date.substr(0, 2));
        if (day >= 1 && day <= 15 && (reg.males + reg.females) > 5) {
            cout << "- " << reg.place << " with " << (reg.males + reg.females) << " registrations\n";
        }
    }


    unordered_map<string, int> stateRegistrations;
    for (auto& reg : registrations) {
        int day = stoi(reg.date.substr(0, 2));
        if (day >= 1 && day <= 31) {
            stateRegistrations[reg.state] += reg.males + reg.females;
        }
    }

    vector<pair<string, int>> sortedStates(stateRegistrations.begin(), stateRegistrations.end());
    sort(sortedStates.rbegin(), sortedStates.rend(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.first < b.first; 
    });

    cout << "States with registrations between 1-01-2025 and 31-01-2025 (ordered by state name):\n";
    for (auto& state : sortedStates) {
        cout << "- " << state.first << " with " << state.second << " registrations\n";
    }

    return 0;
}
