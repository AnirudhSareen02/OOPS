#include<iostream>
using namespace std;

class rectangle{
    private:
    int length, breadth;

    public:
    rectangle();                /*default or non parameterized constructor*/
    rectangle(int l, int b);    /*parameterized constructor*/
    rectangle(rectangle &r);    /*copy constructor*/

    void setlength(int l);   /*set the length function*/     /*mutators*/
    void setbreadth(int b);  /*set the breadth function*/    /*mutators*/
    
    int getlength();    /*return length*/               /*accessors*/
    int getbreadth();   /*return breadth*/              /*accessors*/

    int area();
    int paremeter();

    bool isSquare();    /*check is its square or not*/
    ~ rectangle();      /*calling destructor*/
};

int main(){
    rectangle r1;

    int l,b;
    cout<<"enter length: ";
    cin>>l;
    r1.setlength(l);

    cout<<"enter breadth: ";
    cin>>b;
    r1.setbreadth(b);

    rectangle r2(r1);

    cout<<"the area is : "<<r1.area()<<endl;
    cout<<"the perimeter is : "<<r1.paremeter()<<endl;
    
    cout<<"the copy area is: "<<r2.area()<<endl;

    if (r1.isSquare())
    {
        cout<<"its a square"<<endl;
    }
    
}

rectangle:: rectangle(){        /*scope resoltion is an operator :: which enables you to write the function outside the class*/
    length=0;
    breadth=0;
}

rectangle::rectangle(int l, int b){
    length= l;
    breadth= b;
}

rectangle::rectangle(rectangle &r){
    length=r.length;
    breadth = r.breadth;
}

void rectangle::setlength(int l){
    length = l;
}

void rectangle::setbreadth(int b){
    breadth =b;
}

int rectangle::getlength(){
    return length;
}

int rectangle::getbreadth(){
    return breadth;
}

int rectangle::area(){
    return length*breadth;
}

int rectangle::paremeter(){
    return 2*(length + breadth);
}

bool rectangle::isSquare(){
    return length == breadth;
}

rectangle:: ~rectangle(){
    cout<<"rectangle constructor destroyed!"<<endl; /*a destructor is called to destroy the constructor created*/
}