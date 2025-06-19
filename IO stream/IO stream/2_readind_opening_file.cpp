#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream ifs("first file.txt");
    // ifs.open("first file.txt"); another way to read/open but you must declare the object first, it means the upper line just dont write the file name there
    if(ifs.is_open()) cout<<"file is opened"<<endl; /*yet another way*/

    /*you must know the order in which the data will be displayed*/
    string name;
    int age;
    string degree;

    ifs>>name>>age>>degree; /*taking the values*/
    ifs.close(); /*closing is must*/

    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"degree: "<<degree<<endl; /*outputting the data*/
}