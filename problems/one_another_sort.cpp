/*sort one array accouding to other*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,3,2};
    char b[]={'c','a','b'};
    

    vector<pair<int, char>> combo;
    int n = sizeof(combo)/sizeof(combo[0]);

    for(int i=0; i<n; i++){
        combo.push_back(make_pair(a[i],b[i]));
    }

    sort(combo.begin(), combo.end());

    for (int i = 0; i < n; i++)
    {
        a[i]=combo[i].first;
        b[i]=combo[i].second;
    }
    
    cout << "Sorted Integer Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Rearranged Character Array: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}