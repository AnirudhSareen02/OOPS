#include<iostream>
using namespace std;

class base{
public:
    virtual void  display(){ /*virtual makes the function such that, its not the real part*/
        cout<<"fun of base";
    }
};

class derived: public base{ /*so the compiler will output this child class overridded function*/
public:
    void display(){
        cout<<"fun of dervived";
    }
};

int main(){
    derived d; /*first case is without virtual keyword, we get the fun of base*/
    base *b= &d;
    b->display(); /*after applying virtual function, we get the fun of derived*/
}