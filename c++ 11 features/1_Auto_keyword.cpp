#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    auto x= 12.45; /*automatically decides what type of variable is it*/
    cout<<x<<endl;

    auto a= 12+7.5+'a';
    cout<<a<<endl; 
}