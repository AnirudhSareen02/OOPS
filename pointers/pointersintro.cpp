#include<iostream>
using namespace std;
int main(){

    int i=4;
    cout<<&i<<endl; //will print the address of where i is stored in memory

        i= i+1;     //increment to see the changes reflected

    int * p= &i;    //points to location of where i is stored in the memory
    cout<<p<<endl;  //will print the address of the i
    cout<<*p<<endl; //will print the vaue of the i

    int *q= p;
    cout<<q<<endl;  //this will still point to the destination of p that is i
    cout<<*q<<endl; //this will still give the value of p that is i
    cout<<&q<<endl; //this is the location of where q pointer is stored in the memory
}