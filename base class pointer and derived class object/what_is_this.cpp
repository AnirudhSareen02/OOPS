/*we can declare pointer of a parent class and point it to objet of child class, but we cant do the opposite*/
#include<iostream>
using namespace std;

class base{
    public:
        void fun1(){
            cout<<"fun1 of base";
        }
};

class derived: public base{
    public:
        void fun2(){
            cout<<"fun2 of derived";
        }
};

int main(){
    derived d;
    base *ptr = &d;
    ptr->fun1();
    // ptr -> fun2(); it will not work cause we are making the base class pointer point towards derived class
    /*a pointer will look for the fun2() function in base class but it is in derived class so it will not be called and give an error*/

    // base b;
    // derived *p=&b; 
    /*the fun thing is, you cant do this*/
}