/*find median of data*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]= {2,8,7,6,2,9,5,4,3,3,8,4};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a+n);

    double median;
    if(n%2 == 0){
        median = (a[n/2 - 1] + a[n/2]) / 2.0;
    }else{
        median = a[n/2];
    }

    cout<<median;
}