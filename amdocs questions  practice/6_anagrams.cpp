#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    unordered_map<char, int> freq;

    for(char ch : s1){
        freq[ch]++;
    }

    for (char ch: s2)
    {
        freq[ch]--;
        if(freq[ch]<0){
            return false;
        }
    }

    return true;
    
}

int main(){
    string s = "anirudh";
    string a = "hdurila";

    if(anagram(s,a)){
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}