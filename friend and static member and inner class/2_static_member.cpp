#include<iostream>
using namespace std;

class test{
    public:
        int a;
        static int count; /*this is a static member variable*/
        test(){ /*non parameterized constructor*/
            a=10;
            count++;
        }

        static int getcount(){ /*this is a static member function*/
            //a++; /*we cannot use non static members inside the static function, it will give an error*/
            return count;
        }
};
int test::count=0; /*we have to declare the static member outside also, like a global variable but can only be accessed in the class associated with it*/

int main(){
    test t1,t2; /*object of class test*/
    /*jitni baar object banaoge utni baar count +1 hota jayega*/
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    /*the static member is same for however many objects of that class, making it space efficient*/
    t1.count=20; /*although we made the value of count as 20 using the object t1*/
    cout<<t2.count<<endl; /*but as the static member is shared by all the instances of the class, this means it will give the same result to any other object*/
    cout<<test::count<<endl<<endl; /*you can write the static member with object and class, this is the way to write with class using scope resolution*/

    /*same ways to write a static member function also*/
    cout<<test::getcount()<<endl;
    cout<<t1.getcount()<<endl;
    cout<<t2.getcount()<<endl;

    /*note: static members belong to a class not its objects, you can also print wothout creating an object*/
}