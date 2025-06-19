#include<iostream>
using namespace std;

class shape{
    public:
        virtual float area() = 0;
        virtual float parimeter() = 0;
};

class rectangle:public shape{
    private:
        int length;
        int breadth;
    public:
        rectangle(float l= 1, float b= 1){
            length= l;
            breadth = b;
        }
        float area(){
            return length*breadth;
        }
        float parimeter(){
            return 2*(length+breadth);
        }
};

class circle:public shape{
    private:
        float radius;
    public:
        circle(float r=1){radius = r;}
        float area(){
            return 3.14*radius*radius;
        }
        float parimeter(){
            return 2*3.14*radius;
        }
};

int main(){
    shape *s= new rectangle(5,10);
    cout<<"the area of rectangle is: "<<s->area()<<endl;
    cout<<"the parimeter of rectangle is: "<<s->parimeter()<<endl;
    delete s; /*for better memory management as it is created in heap instead of stack*/

    s= new circle(5);
    cout<<"the area of circle is: "<<s->area()<<endl;
    cout<<"the perimeter of circle is: "<<s->parimeter()<<endl;
    delete s;
}