/*at a given time, whats the max people on cruise*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"enter time: ";
    cin>>t;

    int e[t];
    int l[t];

    cout<<"enter the guest enetring: ";
    for (int i = 0; i < t; i++)
    {
        cin>>e[i];
    }

    cout<<"\nenter the guest leaving: ";
    for (int i = 0; i < t; i++)
    {
        cin>>l[i];
    }

    int max = 0;
    int current = 0;

    for (int i = 0; i < t; i++)
    {
        current+= e[i];
        current-= l[i];

        if(current>max){
            max = current;
        }
    }
    
    cout<<"\nthe max guests are: "<<max;
}