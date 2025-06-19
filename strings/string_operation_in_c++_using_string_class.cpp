#include<iostream>
#include<string>
using namespace std;

int main(){

    string str= "hello world";

/*size and length function is one and a same thing, shows the size of the string and will show 0 if the string is null*/
    cout<<"string size is: "<<str.size()<<endl;
    cout<<"string length is: "<<str.length()<<endl;

/*the capacity shows the capacity of the string which will always be bigger than what the input is*/
    cout<<"str capacity is: "<<str.capacity()<<endl;

/*will resize the capacity of the string but will always be bigger than what you enter*/
    str.resize(20);/*will make the capacity more than 20, depends on compiler*/
    cout<<"capacity after resize: "<<str.capacity()<<endl;
    cout<<"size after resize: "<<str.size()<<endl;

/*it will clear the content of the string but the capacity will remain same*/
    str.clear();
    cout<<"capacity after clearing: "<<str.capacity()<<endl;
    cout<<"size after clearing: "<<str.size()<<endl;

/*same as clear*/
    str.empty();
    cout<<"capacity after empty: "<<str.capacity()<<endl;
    cout<<"size after empty: "<<str.size()<<endl;

/*shows what could be the max size of string we can enter*/
    cout<<"the max size is: "<<str.max_size()<<endl;
}