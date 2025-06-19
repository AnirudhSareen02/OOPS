#include<iostream>
using namespace std;

int main(){
    float a, b, c;
    cout<<"enter the value of a: ";
    cin>>a;

    cout<<"enter the value of b: ";
    cin>>b;

    try{
        if(a==0 || b==0){
            throw 101; /*if the statement is not correct, try will throw something,it can be any value, and catch will catch it and raise the exception*/
        }else{
            c= a/b;
            cout<<c<<endl;
        }
    }catch(int e){
        cout<<"you have divided by 0"<<"\nerror code: "<<e<<endl;
    }
    cout<<"thank you :)";  /*this will print regardless of the exception raised*/
}