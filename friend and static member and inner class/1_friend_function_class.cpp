/*you already knwo about the friend function we did earlier, now look at friend class*/
#include<iostream>
using namespace std;

/*we didnt get any error but i am adding the next line if any other compiler shows the error "c++ requires type specifier for your declaration"  that your class not found*/
//class your; /*write this if you get error on other compiler but i think latest c++ fixes this*/ 

class my{
    private: int a;
    protected: int b;
    public: int c;

    friend class your; /*we made the your class as a friend and now we can access the private and protected members*/ /*------>*/ /*the type specifier will be here*/
};

class your{
    public:
    my m; /*object m of class my*/
    void fun(){
    m.a=10; /*not accessible as of now cause its private*/
    m.b=5; /*not accessible as of now cause its protected*/
    m.c=4;

    cout<<m.a<<" "<<m.b<<" "<<m.c;
    }
    /*what we do now is make this class as a friend*/
};

int main(){
    your y;
    y.fun();
}