/*given a string has * and #, return positive number if *>#, negative for reverse and 0 if both are same*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = {"###***#"};
    int star = 0;
    int hash = 0;

    for(char c : s){
        if(c=='*'){
            star++;
        }else if(c=='#'){
            hash++;
        }
    }

    if(star==hash){
        cout<<"0"<<endl;
    } else if(star>hash){
        cout<<"1";
    }else{
        cout<<"-1";
    }
}
