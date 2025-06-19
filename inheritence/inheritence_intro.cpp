#include<iostream>
using namespace std;

class rectangle{        /*create a normal rectangle class*/
    private: 
        int length;
        int breadth;
    public:
        rectangle (int l = 1, int b = 1){
            length = l;
            breadth= b;
        }

        void setL(int l){
            length= l;
        }
        void setB(int b){
            breadth = b;
        }
        int getl(){return length;}
        int getb(){return breadth;}

        int area(){
            return length*breadth;
        }
        int parameter(){
            return 2* (length + breadth);
        }
        
};

class cuboid: public rectangle{ /*this is inheritence where cuboid is child class borrowing elements from parent rectangle class*/
    private: 
        int height;
    public:
        cuboid(int h, int l, int b):rectangle(l,b){
            
            height = h;
        }

        void seth(int h){
            height = h;
        }
        int geth(){return height;}
        
        int volume(){
            return getl()*getb()*height; /*here we donot have l and b in cuboid but we have get functions so we write that here and a child class cannot access private members of parent class*/
        }
};

int main(){
    cuboid c(5, 8, 6); /*here we go*/
    cout<<c.volume();  
}
