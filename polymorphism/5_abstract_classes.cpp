#include<iostream>
using namespace std;

/*after making the parent class as pure virtual we achieve what is called as an abstract class*/
class car{
    public:
        virtual void start()=0; /*this is a pure virtual function used for only achieving polymorphism*/
};

/*if in the child class we also use a pure virtual function or donot override the function it will also become an abstract class and we cant make its object*/
class innova: public car{
    public:
        void start(){
            cout<<"innova started!"<<endl;
        }
};

class swift: public car{
    public:
        void start(){ /*the functions which are written or have some content are called concrete functions*/
            cout<<"swift started!"<<endl; 
        }
};

int main(){
    // car c; you cannot create an object of an abstract class
    car *c= new innova(); 
    c->start();
    c= new swift();
    c->start();
}