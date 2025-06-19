#include<iostream>
using namespace std;

class complex{
    private:
        int real, img;
    public:
        complex(int r=0, int i=0){
            real= r;
            img= i;
        }
        friend ostream & operator<<(ostream & out, complex &c); /*ostream is output stream like in the <iostream>*/
        /*<< this is called insertion operator and we are overloading this to directly shoe the complex number*/
};

ostream & operator<<(ostream & out, complex &c){
    cout<<c.real<<"+i"<<c.img;
    return out;
}

int main(){
    complex c(5,6);
    cout<<c;
}