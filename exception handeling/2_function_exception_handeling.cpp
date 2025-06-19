#include<iostream>
using namespace std;

/*the main use of try and catch is in functions*/
float division(float a, float b){
    if (a==0 || b==0)
    {
        throw 101; /*the throw in this function will execute in case a or b is 0 and the catch in main will catch it*/
    }else{
        return a/b;
    }
}

/*we could just use if else in the main function and call it a day*/
int main(){
    float a, b, c;
    cout<<"enter the value of a: ";
    cin>>a;

    cout<<"enter the value of b: ";
    cin>>b;

    try{
        c= division(a,b);
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"you have divided by 0"<<"\nerror code: "<<e<<endl;
    }
    cout<<"thank you :)";  /*this will print regardless of the exception raised*/
}