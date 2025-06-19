#include<iostream>
using namespace std;

int main(){
    string a = "nitin";
    string reverse;

    for (int i = a.length()-1; i >= 0; i--)
    {
        reverse += a[i];
    }
    
    if (a == reverse)
    {
        cout<<"It is pallindrom";
    }else{
        cout<<"nope baby";
    }
    return 0;
}