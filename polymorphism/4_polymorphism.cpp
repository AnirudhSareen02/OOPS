#include<iostream>
using namespace std;
/*polymorphism is having child classes or sub classes inheriting from a superclass.*/
class car{
    public:
        virtual void start(){ /*we have to make clear that the function is virtual*/
            cout<<"car started!"<<endl; //if we delete the content of the function and write, virtual void start() = 0;, we achieve true polymorphism
        }
};

class innova: public car{
    public:
        void start(){ /*we must override a function to achieve polymorphism*/
            cout<<"innova started!"<<endl;
        }
};

class swift: public car{
    public:
        void start(){
            cout<<"swift started!"<<endl;
        }
};

int main(){
    car *c= new innova(); /*syntax for achieving polymorphism*/
    c->start(); /*without writting virtual, we will get the answer as car started both times*/
    c= new swift();
    c->start();
    /*steps for polymorphism - 
    1. we must make a superclass and make the functions virtual
    2. we must override the functions
    3.use parentclass *p= new class() as a syntax*/
}