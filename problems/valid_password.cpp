#include<bits/stdc++.h>
using namespace std;

bool password(const string &name){

    vector <char> special = {'!','@','%','^','&','*'};
    if(name.length()<2 || name.length()>22){
        return false;
    }

    int low = 0, big = 0, num = 0, spl = 0;

    for(auto &ch: name){
        if(isupper(ch)){
            big++;
        }
        if(islower(ch)){
            low++;
        }
        if(isdigit(ch)){
            num++;
        }
        if(find(special.begin(), special.end(),ch) != special.end()){
            spl++;
        }
    }
    return low>0 && big>0 && num>1 && spl>1; 
}

int main(){
    cout<<password("anHirudh12^*");
}