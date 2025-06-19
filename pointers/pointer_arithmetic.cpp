#include<iostream>
using namespace std;
int main(){

    int a= 7;
    int *p= &a;

    p= p+1;     //shifts the pointer to the next memroy location, that is next 4 bytes as int takes 4 bytes
                //same you can do +, - and it will point to next or previous memory block
    cout<<a<<" "<<*p;     //this will give value of a and one garbage value, because we dont know what value is in the next memory block

}