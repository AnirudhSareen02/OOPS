#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n>0){
        return fact(n-1)*n;
    }
    return 1;
}

int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;

    cout<<fact(a);
}