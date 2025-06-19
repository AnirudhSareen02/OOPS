#include<iostream>
#include<string.h> //it is a c library.
#include<cstring>
#include<string> //its a c++ library.
#include<limits>

using namespace std;

int main(){

    /* concatenate -> */  

    // string a= "hello";
    // string b= " world";
    // strcat(a,b);
    //the above code will not work because you cannot add 2 strings using strcat(a,b) in c++, only in c, but there is a way ->

    char a[] = "hello";
    char b[] = "world";
    cout<<strcat(a,b)<<endl; /*this is a way to concatenate 2 char array in c++*/

    cout<<strlen(a)<<endl; // for finding length

    char *s;
    s="anirudh";

    cout<<s<<endl; //another way is through pointer, although it would give us warning about implicit typecasting.

    // concatenate string in c++
    string m="bro";
    string n=" code";

    string c= m+n;
    cout<<c<<endl;

    string d=m.append(n); /*or this is another way to do it ussing append*/
    cout<<d<<endl;

    /*outputting strings*/

    char p[10];
    cout<<"enter the string: ";
    cin.getline(p,10);

    cout<<"the length is: "<<strlen(p)<<endl; // this will only print the length of first string and will not, to any string after the space.

    /* we will use the getline here to deal with it*/

    // cin.ignore();  -> sadly didnt work enough.    
cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this is a code to ignore the input buffer where your afterline string is stored
// this is used when we dont use cin.getline, we hust use cin. so it doesnt serve any particular function here but hey, its for learning 
    
    char p1[10];
    cout<<"enter the string: ";

    cin.getline(p1,10);

    cout<<"the length is: "<<strlen(p1)<<endl;
    cout<<p1<<endl;
}