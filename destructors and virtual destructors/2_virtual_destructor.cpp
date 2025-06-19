#include<iostream>
using namespace std;

class base{
    public:
       virtual~base(){   /*i added virtual keyword later*/
            cout<<"destructor of base"<<endl;
        }
};

class derived: public base{
    public:
        ~derived(){
            cout<<"destructor of derived"<<endl;
        }
};

void fun(){
    // derived d; /*we did this first then wrote the next ----> */
    base *p= new derived();
    delete p; /*deleting is imp to release memory*/

    /*notice that when run, only the destructor of base class is called, to fix this we use the keyword virtual*/
}

int main(){
    fun(); /*destructor of derived class is called first and then the base class*/
    /*constructor is called base first and then derived, but destructors behave opposite*/
}