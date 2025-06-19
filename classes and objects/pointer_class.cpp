#include<iostream>
#include<string>
#include<limits>
using namespace std;

class student{
    public:

    string name;
    int age, roll;

    int data(){
        cout<<"age is: "<<age<<endl;
        cout<<"roll is: "<<roll<<endl;
        cout<<"name is: "<<name<<endl;
    }

};

int main(){
    student stu; /*object of the student class*/

    student *ptr= &stu; /*declaring a pointer*/

    ptr->age; /*the "->" acts as a dereferencing operator, here it is pointing to the data members of the class*/
    ptr->roll;
    ptr->name;

    cout<<"enter your age: ";
    cin>>ptr->age; /*here it is dereferencing, that is giving what the value was pointed by ptr in age*/

    cout<<"enter your roll: ";
    cin>>ptr->roll;

    cin.ignore(numeric_limits<streamsize>::max(),'\n'); /*to clear the input buffer, because of string*/

    cout<<"enter name: ";
    getline(cin,ptr->name); /*getline so that we can write more than 1 word*/

    ptr->data(); /*outputting the member function of the class student*/

    return 0;

}