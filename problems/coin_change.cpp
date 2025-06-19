
#include<iostream>
using namespace std; 
int main(){
    int bill;
    int a[7]= {100,50,20,10,5,2,1};

    cout<<"what is the total amount of the bill: ";
    cin>>bill;

    int count=0;
    int temp=bill;

    cout<<"coins: ";
    for (int i = 0; i<7; i++)
    {
       while (temp>=a[i])
       {
        temp -= a[i];
        count++;
        cout<<a[i]<<" ";
       }

    }
    cout<<endl;
    cout<<"total coins: "<<count;
}