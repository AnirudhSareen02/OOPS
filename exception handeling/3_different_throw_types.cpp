#include<iostream>
#include<exception> /*lirary for built in exception class*/
using namespace std;

// class MyException{}; /*you can also throw exception using a class*/
// class MyException:exception{}; /*you can also inherit from exception class from built in exceptionn class*/


/*in modern c++, we donot need to tell which exception the function is throwing so it will give us a warning -> throw(string)*/

int division(int a, int b) throw(string){ /*you can also write like this and give the data type you wanna throw, 
the throw can be empty also throw() but you cannot write throw inside the function then or else it will give an error that function is throwing nothing yet
you are throwing something inside the function*/
    if(a==0 || b==0){
        throw string("error lil bro");
    }
    else{
        return a/b;
    }
}

int main(){
    float a, b, c;
    cout<<"enter the value of a: ";
    cin>>a;

    cout<<"enter the value of b: ";
    cin>>b;

/*syntax for throwing using class*/
    // try{
    //     if(a==0 || b==0){
    //         throw MyException(); /*you can also thow int, float, double, string in exception*/
    //     }else{
    //         c= a/b;
    //         cout<<c<<endl;  
    //     }
    // }catch(MyException){
    //     cout<<"you have divided by 0"<<endl;
    // }

/*syntax for throwing using function*/
      try{
        c= division(a,b);
        cout<<c;
    }catch(string &e){ /*we use reference here also known as alias in sql, you know what i mean*/
        cout<<"you have divided by 0"<<e<<endl;
    }
    cout<<"thank you :)";
}
