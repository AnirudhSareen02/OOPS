#include<bits/stdc++.h>
using namespace std;
/*reverse a string*/
int main(){
    string a = "Amdocs";
    string temp;

    for (int i = a.length() - 1; i >= 0; i--)
    {
        temp+= a[i];
    }
    cout<<temp;
}