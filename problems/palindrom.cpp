#include<bits/stdc++.h>
using namespace std;

int palindrom(string s){
    int left=0;
    int right= s.length()-1;

    while (left < right)
    {
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;

    if(palindrom(s)){
        cout<<"yes";
    }else{
        cout<<"nope";
    }
}