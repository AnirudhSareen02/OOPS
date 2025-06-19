#include <iostream>
using namespace std;
/*we use  lambda to create un-named functions*/
int main()
{
    /*[capture_list](parameter list)->return type{body}*/

    [](){cout<<"hello world"<<endl;}(); /*this is a normal lambda expression*/
    /*() after the end of the lambda, will call the function*/

    [](int a, int b)->int{cout<<"sum: "<< a+b<<endl;
     return a+b; /*or use this return type to avoid warning !!! dont read this line, first read the comment*/}(5,10); /*this is with parameters and return type, 5 and 10 are a and b*/
    /*if you dont write the return type, even then it will work -> [](int a, int b){cout<<"sum: "<< a+b;}(5,10);*/
    /*the warning you are getting in this line is because you defined explicit return type, the function is not returning anything
    so the return type should be void, or use return a+b like i did -> check again bitch*/

    auto x= [](int a, int b){return a+b;};
    cout<<"sum of a and b in x is: "<<x(4,8)<<endl;

    auto f= [](){cout<<"hello world"<<endl;}; /*instead of calling the function in lambda itself,we can also assign a variable*/
    f(); /*this f will represent the whole lambda function, we can do this also, its cool right :)*/

    int s= 10, h=80;
    [s,h](){cout<<"s: "<<s<<" "<<"h: "<<h<<endl;}(); /*we use the capture here, if we didnt write anything in capture list, it would not have diplayed s and h
    we need to take variables in capture list if they are local, or in the function*/

    [&s,&h](){cout<<"s: "<<++s<<" "<<"h: "<<++h;}(); /*we cannot change the values of s and h, we have to make them as
    reference in capture list or if we want to change all the things, just write this in capture list -> [&], it will reference all*/
}