#include<iostream>
using namespace std;

class square{

    private:

    int side;

    public:

    void setside(int s){
        if(s<=0){
            cout<<"it cant be negative or zero!";
        }else{
             side=s;
        }
    }
    int getside(){
        return side;
    }

    float area(){
        return side*side;
    }
};

int main(){
    square a;

    int s;

    cout<<"enter the lenght of side: ";
    cin>>s;
    a.setside(s);

    cout<<a.area();
}