#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"enter the color of ballons: ";
    cin>>n;
    char B[n];

    for(int i=0; i<n; i++){
        cin>>B[i];
    }

    unordered_map<char,int> umap;

    for(char ch: B){
        umap[ch]++;
    }

    for(auto &p : umap){
        if(p.second%2 != 0){
            cout<<p.first<<":"<<p.second;
        }
    }
}