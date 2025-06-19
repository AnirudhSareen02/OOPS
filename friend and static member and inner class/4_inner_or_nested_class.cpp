#include<iostream>
using namespace std;

class outer{
    public:
            void fun(){ /*can only access the public functions of nested class*/
                i.show();
            }

        class inner{
            public:
                void show(){
                    cout<<"show";
                }
        };
        inner i; /*you can create an object of an inner class inside the class, only after its declaration*/
};

int main(){
    outer::inner i; /*you can also create object of inner class like this*/
    /*acc to chat gpt this is not a good approach to create an object of inner class but this is ---->*/
    outer obj;
    outer:: inner inr; /*idk why but it said its correct*/

    inr.show();

    /*another way from outer class--->*/
    outer obj;
    obj.fun();
}