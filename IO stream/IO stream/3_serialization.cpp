/*serializaation is storing and retrieving the state of an object*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student{
    public:
        string name;
        int roll;
        string branch;

        friend ofstream & operator<<(ofstream &ofs, student &s); /*we wrote this first*/
        friend ifstream & operator>>(ifstream &ifs, student &s); /*and this after implementing the creation only*/
};

ofstream & operator<<(ofstream &ofs, student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
};

ifstream & operator>>(ifstream &ifs, student &s){ /*this is for reading data from the file*/
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
};

int main(){
    student s1;
    s1.name="john";s1.roll=01;s1.branch="cs"; /*we want to store it as an object and we dont have to write everything manually*/

    ofstream ofs("student.txt", ios::trunc);
    
    /*if we have created an object we dont want ki we should store like this*/
    // ofs<<s1.name<<endl;
    // ofs<<s1.roll<<endl;
    // ofs<<s1.branch<<endl;
    /*we want ki just we could store an object as a whole and thats why we used operator overloading here << and >>*/

/*storing student object*/ ofs<<s1; /*complete object is written and we dont have to write it manually like up, its done in the class itself and not main function*/
    ofs.close();

    ifstream ifs("student.txt");
    ifs>>s1; /*reading student object*/
     
    /*to print on screen*/
    cout<<"name: "<<s1.name<<endl; 
    cout<<"roll: "<<s1.roll<<endl;
    cout<<"branch: "<<s1.branch<<endl;
    ifs.close();
}
