#include<iostream>
using namespace std;

class rectangle{  /*we create a class called rectangle*/
    public: /*so that we can access the function from outside the class*/

    float l,b;  /*data member of the class*/

    int area(){     /*member function of the class*/
        return l*b;
    }
    int parameter(){    /*member function of the class*/
        return 2*(l+b);
    }
};

int main(){
    rectangle r1,r2;   /*r1 and r2 are objects of the class*/
    /*we use rectangle instad of anything like int cause class is a user defined data type*/

    cout<<"enter l and b of r1: ";
    cin>>r1.l>>r1.b;

    cout<<"the area is: "<<r1.area()<<endl;
    cout<<"the parameter is: "<<r1.parameter()<<endl;

    cout<<"enter l and b of r2: ";
    cin>>r2.l>>r2.b;

    cout<<"the area is: "<<r2.area()<<endl;
    cout<<"the parameter is: "<<r2.parameter()<<endl;

    return 0;

}