#include<iostream>
#include<memory> /*library for smart pointers*/
using namespace std;

class base{
    int length, breadth;
    public:
        base(int l, int b){
            length= l;
            breadth= b;
        }
        int area(){
            return length*breadth;
        }
};

/*we use smart pointers in dynamic memory allocation because, if we forget to write delete at the end, it could cause memory leakage, but using smart pointers
we eliminate that need as the smart pointers automatically deallocates when leaving the scope in which the pointer is declared.
basically to ease with the dynamic memory allocation*/

int main(){
    unique_ptr<base> ptr(new base(10,5)); /*this is a unique pointer, after the functions ends, it is deleted automatically*/
    cout<<ptr->area()<<endl;

    unique_ptr<base> ptr2; /*since we cannot assign one memory object to 2 pointers using unique_ptr, cause its unique*/
    ptr2 = move(ptr); /*we use move keyword*/
    cout<<ptr2->area()<<endl; /*at this point the earlier ptr will become null and ptr2 will be assigned ptr*/
    /*cout<<ptr->area()      this will give the error as at this point ptr doesnt contain anything*/

    /*-------------------------------------------------------------------------------------------------------------------------*/

    shared_ptr<base> ptr3(new base(5,5)); /*this is a shared pointer*/
    cout<<ptr3->area()<<endl;

    shared_ptr<base> ptr4; /*a shared pointer can point to object using more than 1 pointer, thats why its shared*/
    ptr4 = ptr3;  /*now we can directly assign*/
    cout<<"pointer 4: "<<ptr4->area()<<endl;
    cout<<"pointer 3: "<<ptr3->area()<<endl;
    cout<<ptr3.use_count()<<endl; /*in shared pointer, we can see how many pointers are pointing to one memory location*/
    /*the use_count holds a reference count, how many pointers are pointing to that memory*/

    /*-------------------------------------------------------------------------------------------------------------------------*/

    /*we use weak pointer to avoid situations like deadlock, it is like shared ptr but it will not hold the reference count as in shared*/
    /*see them later i dont get them*/
}

