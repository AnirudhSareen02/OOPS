/*count the number of subarrays with certain sum*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> count;

    vector<int> arr= {1,5,-8,4,3,4,3};
    int n = arr.size();
    int k = 7;

    int prefix = 0;
    count[0] = 1;
    int ans = 0; 
    

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];

        if (count.find(prefix - k) != count.end())
        {
            ans += count[prefix - k];    
        }
        count[prefix]++;
    }
    
    cout<<"Total subarrays are - "<< ans;

    return 0;
}   