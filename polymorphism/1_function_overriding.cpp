#include<iostream>
using namespace std;

class base{
    public:
        void display(){
            cout<<"display base class";
        }
};

class derived: public base{
    public:
        void display(){ /*this is function overriding, where the function name is same as the parent class*/
            cout<<"display derived class";
        }
};

int main(){
    derived d;/*we create object of child class and if we call it, then the child function will be executed*/
    d.display();
}