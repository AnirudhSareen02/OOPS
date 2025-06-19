#include<iostream>
using namespace std;

class base{
    public:
        base(){ /*after the output we see that whenever called, the parent constructor is outputed first, but the child constructor if used, will be called but not outputed*/
            cout<<"non parameterized base constructor"<<endl;
        }
        base(int x){
            cout<<"parameterized constructor of base "<<x<<endl;
        }
};

class derived:public base{
    public:
        derived(){
            cout<<"non parameterized derived constructor"<<endl; /*this will be called first in the main, but parent will output*/
        }
        derived(int x, int y):base(x){/*this is how u call parent constructor from child constructor*/
            cout<<"parameterized constructor of derived "<<y<<endl;
        }
};

int main(){
    /*the call happens from derived to base, but the exectution/output is done from base(parent) to derived(child)*/
    derived d(5,10);
}