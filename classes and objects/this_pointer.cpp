#include<iostream>
using namespace std;

class rectangle{
    private:
    int length, breadth;

    public:
    rectangle(int length, int breadth){ 
/*what it does is if we want same name, so assigning them with = will not help, so we use "this ->" to assignn the public length to private length */
        this->length= length;
        this->breadth= breadth;
    }

    int area(){
        return length*breadth;
    }
    int parameter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r1(10,5);

    cout<<r1.area();

}