#include<iostream>
using namespace std; 
int main(){
    int bill, mon, change;
    int a[7]= {100,50,20,10,5,2,1};

    cout<<"what is the total amount of the bill: ";
    cin>>bill;
    cout<<"money recieved: ";
    cin>>mon;

    if (mon>=bill)
    {
        change= mon-bill;
        cout<<"the change is: "<<change<<endl;

    int temp=change;

    cout<<"the coins are : ";
    for (int i = 0; i<7; i++)
    {
       while (temp>=a[i])
       {
        temp -= a[i];
        cout<<a[i]<<" ";
       }
    }
cout<<endl;
    }else{
        cout<<"money recieved is less!";
    }
    
}