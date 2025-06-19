#include<iostream>
using namespace std;

int main(){
    
    char x[10]="hello"; //this is an array of characters hence string, its one way to initialize it.
    cout<<x<<endl; //note that if the size here is 10, we can store 9 characters and the last one would be a null character "\0" indicating that the string has ended


    char s[]={'h','e','l','l','o','\0'}; //it indicates null character and whatever you write after this will not be printed.
    cout<<s<<endl;

    char *a= "hello";
    cout<<a<<endl; //another way is using a pointer which will point to the string address
    //note that this is implicit typecasting as the compiler is converting the char pointer to a string which is not allowd, so either write const char or just use explicit typecasting, nevertheless it will print the result, will just give a warning!

    string m="hello";
    cout<<m<<endl; //another way is this.
}
