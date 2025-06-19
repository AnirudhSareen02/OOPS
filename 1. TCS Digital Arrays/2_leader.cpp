#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {10,78,46,70,48,7,69,21};
    int maxsofar = INT_MIN;

    vector<int> leader;

    for ( int i = sizeof(arr)/sizeof(arr[0])-1; i >= 0; i--)
    {
        if(arr[i]>maxsofar){
            maxsofar = arr[i];
            leader.push_back(arr[i]);
        }
    }
    
    reverse(leader.begin(), leader.end());

    for (int i = 0; i < leader.size(); i++)
    {
        cout<<leader[i]<<" ";
    }
}