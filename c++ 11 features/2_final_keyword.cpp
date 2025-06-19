#include<iostream>
using namespace std;

class base /*final*/{ /*when we use final keyword, it stops the inheritence, it doesnt let the child class inherit from base class*/
    public:
        virtual void show() final{ /*a non virtual function cannot be declared final*/

        }
};

class child:public base{
    public:
        // void show(){ /*it will not let us override the function, the final keyword and thats its use case*/

        // }
};

int main(){

}