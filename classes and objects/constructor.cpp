#include<iostream>
using namespace std;

class rectangle{
    private:
    int length,breadth;
    
    public:

    void setlength(int l){
        if(l<=0){
            cout<<"no value under 0!"<<endl;
        }else{
            length=l;
        }
    }

    void setbreadth(int b){
        if (b<=0)
        {
            cout<<"no value under 0!"<<endl;
        }else{
            breadth=b;
        }
        
    }

    // rectangle(){    /*this is a non parameterized constructor, it doesnt have any parameters*/
    //     int l=1;
    //     int b=1;
    // }

    rectangle(int l=1,int b=1){ /*this is a parammeterized constructor, caus it has parameters*/
        setlength(l);
        setbreadth(b);
    }   /*changes made are - initialized l and b to 1 as a default value in case the user doesnt enter any value*/

    /*since we have written so many constructors, it is now constructor overloading, you can remove the non parameterized constructor
    after giving the default values of l and b in parameterized constructor*/

    rectangle (rectangle &r){ /*copy constructor,  we use reference variable cause we dont want to create  new object or member */
        length=r.length;
        breadth=r.breadth;
    }
    int area(){
        return length*breadth;   
    }

    int parameter(){
        return 2*(length+breadth);
        }
};

int main(){
    rectangle r1;


    int l,b;
    cout<<"enter l and b: ";
    cin>>l>>b;

    r1.setbreadth(b);
    r1.setlength(l);

    rectangle r2(r1); /*make the copy object after taking the values of r1, l and b*/

   cout<<"area is: "<<r1.area()<<endl;
   cout<<"parameter is: "<<r1.parameter()<<endl;

   cout<<"area of r2 copy is: "<<r2.area()<<endl;
}