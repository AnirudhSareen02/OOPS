/*operator overloading is a process to perform operations on user defined datatypes such as class, but operators are made to only use on built in data types
so we use operator overloading by redefining what the operator will do on our custom datatype*/

#include<iostream>
using namespace std;

class complex{
    public: 
    int real;
    int img;

    complex operator+ (complex c){
        complex temp; 
        temp.real = real + c.real;
        temp.img = img+ c.img;
        return temp;
    }

};

int main(){
    complex c1, c2, c3;
    c1.real= 5; c1.img = 3;
    c2.real= 10; c2.img = 5;

    c3= c1+c2;
    cout<<c3.real<<" +i"<<c3.img;
}