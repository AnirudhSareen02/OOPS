#include<iostream>
using namespace std;

class complex{
private: 
    int real;
    int img;

public:
        complex (int r = 0, int i = 0){
            real = r;
            img = i;
        }

    void display(){     /*function to display the sum or any operation as a matter of fact*/
        cout<<real<<" +i"<<img;
    }

     friend complex operator+ (complex c1, complex c2); /*a friend function is there so that we can acces private and protected functions of class even outside*/
};

  complex operator+ (complex c1, complex c2){ /*as there is someone 3rd (friend) doing calculation, we need to pass 2 arguments instead of just 1*/
        complex temp; 
        temp.real =c1.real + c2.real;
        temp.img = c1.img+ c2.img;
        return temp;
    }

int main(){
    complex c1(5,3), c2(10,5), c3;
    c3 = c1+c2;
    c3.display();
    
}