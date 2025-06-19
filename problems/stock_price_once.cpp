#include<bits/stdc++.h>
using namespace std;

int price(int n, vector<int>stock){
    int minprice = INT_MAX;
    int maxprice = 0;

    for (int i = 0; i < n; i++)
    {
       minprice = min(minprice,stock[i]);
       maxprice = max(maxprice,stock[i]-minprice);
    } 
    return maxprice;
}

int main(){
    vector<int> s= {4,8,7,5,9,6,2,6,5};
    int n= s.size();

    cout<<price(n,s);
}