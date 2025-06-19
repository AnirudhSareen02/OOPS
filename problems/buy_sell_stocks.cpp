#include<bits/stdc++.h>
using namespace std;

int price(vector<int>&stock, int n){
    int maxprofit = 0;
    n = stock.size();
    for (int i = 1; i < n; i++)
    {
        if(stock[i]>stock[i-1]){
            maxprofit+= stock[i]-stock[i-1];
        }
    } return maxprofit;
    
}

int main(){
    vector<int> stock = {5,8,4,6,9,7,5};
    int n = stock.size();

    cout<<price(stock,n);
}