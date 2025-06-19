#include<iostream>
using namespace std;

/*lets see using class*/
class demo{
    public: 
        int a= 20; 
        int b= 30;

        void display() const /*by writting const we lock this function*/
        {
            cout<<a<<" "<<b<<endl;
            // a++; cant do because its constant
        }

        void fun(const int &a, int &b)
        {
            cout<<a<<" "<<b;
            // a++; nope, cant do!
        }
        
};

int again2(){
    int x= 10;
    const int * const ptr=&x;

    int y= 20;

    // ++*ptr; cant do as the ptr is const
    // ptr= &y; also cant do as it is constant pointer of integer constant, where pointer and integer is also constant

    cout<<*ptr<<" "<<x<<endl;
    return 0;
}

int again(){
    /*had to create another function to show something*/

    int x= 10;
    int * const ptr= &x; /*what this will do is, lock the pointer on x and we cannot change the pointer to other variable, but the x must not be const
    we read it as pointer constant of type integer*/

    int y= 20;
    // ptr= &y; /*no we cant change the value of ptr as it is constant*/

    ++*ptr; /*yes we can modify the ptr as the pointer is constant not the integer*/
 
    cout<<*ptr<<" "<<x<<endl;
    return 0;
}

int  main(){
    demo d;
    // int x= 10; /*normal right*/
    /*we use constant now*/

    const int x= 10; /*const means value of x is fixed and hence cannot be changed*/
    // int const x=10; can be also written like this
    // x++;  /*it will give error as it cannot be changed*/

    const int *ptr= &x; /*without keyword const this will too give an error*/
    // int const *p= &x; /*can be also written like this*/
    // ++*ptr; /*we cannot modify the ptr as it is declared constant*/

    cout<<*ptr<<" "<<x<<endl;

    /*we usually read it from right to left, so we read the line 58 as variable x of integer constant*/
    /*and line 62 as pointer of integer constant*/
    int y = 20;
    ptr= &y; /*now a const int ptr can point to another variable but*/

    again(); /*calling again function*/
    again2(); /*calling again2*/

    d.display();
    d.fun(x,y);

    return 0;
}