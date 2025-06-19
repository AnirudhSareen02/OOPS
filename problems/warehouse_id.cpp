/*to check which id is single*/
#include<bits/stdc++.h>
using namespace std;

int id(int n, vector<int>arr){

    unordered_map<int, int> count;

    for(int num:arr){
        count[num]++;
    }

    for (auto &pair: count)
    {
        if(pair.second==1){
            return pair.first;
        }
    } 
    return -1;
}

int main(){
    int n = 11;
    vector<int>a={1,2,4,1,4,2,5,6,3,6,3};

    cout<<id(n,a);
}