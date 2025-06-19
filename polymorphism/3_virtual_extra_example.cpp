#include<iostream>
using namespace std;

class basicCar{
public:
    virtual void display(){
        cout<<"basic car start";
    }
};

class advanceCar:public basicCar{
    public:
        void display(){
            cout<<"advance car start";
        }
};

int main(){
     basicCar *b= new advanceCar();
     b->display();

     delete b;
}
/*basically this is runtime polymorphism, we have achieved polymorphism*/