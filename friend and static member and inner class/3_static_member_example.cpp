#include<iostream>
using namespace std;

/*example 1 ------->*/

// class innova{
//     public: 
//         static int price;
//         static int getprice(){
//             return price;
//         }
// };
// int innova::price=20;

// int main(){
//     innova i1,i2,i3;
//     cout<<i1.price<<endl;
//     cout<<i2.getprice()<<endl;
// }

/*example 2 ------>*/
/*a real life usage of static members as a student whenever someone new joins its addmission no gets incremented*/

class student{
    public:
        int roll;
        string name;
        static int addno;

        student(string n){ /*parameterized constructor*/
            addno++; /*whenever we create an object of the student, it gets incremented*/
            roll=addno; /*that will be assigned as a roll no to the student*/
            name=n;
        }

        void display(){
            cout<<name<<", with roll no: "<<roll<<endl;
        }
};
int student::addno= 0;

int main(){
    student s1("ani");
    student s2("kush");
    student s3("chahal");

    s1.display();
    s3.display();
    cout<<"admissions: "<<student::addno<<endl;

    /*good thing is that, we didnt waste memory assigning diff variables to diff objects, thats the beauty of static members*/
}
