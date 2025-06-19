#include<bits/stdc++.h>
using namespace std;

int mar(int k, vector<int> time){
    sort(time.begin(),time.end());
    return time[k-1];
}

int main(){
    vector<int> time = {7,8,5,4,9,6,3,2,1};
    int k = 5;

    cout<<mar(k,time);
}