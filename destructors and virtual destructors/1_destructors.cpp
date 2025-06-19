/*before creation must come destruction*/
#include<iostream>
using namespace std;

class demo{
    public:
        demo(){
            cout<<"constructor demo"<<endl;
        }
    ~demo(){
        cout<<"destructor of the worlds"<<endl; /*used to destroy what was created. mainly we use to avoid data leaks*/
    }
};

// void show(){
//    demo d;
// }
// /*the constructor is created in stack at first, like all others, so it is deleted automatically. the problem arrises in heap, lets see that also*/
// int main(){
//     show();
// }

void show(){
    demo *d= new demo(); /*we create pointer object in heap*/
    delete d; /*consider afterwards, i mean isko baad me likha tha mene*/
}

int main(){
    show(); /*only constructor demo is displayed as the destructor is not created dynamically, so to do that we add delete in show function ->*/
}
/*now after delete, the destructor is called*/