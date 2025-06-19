#include<iostream>
#include<fstream> /*header file for file handeling stuff, i/o streams*/
using namespace std;

int main(){
    ofstream ofs("first file.txt", ios::trunc); /*ofstream is a built in class and ofs is the object of it
                                                ios::trunc will delete the existing file data and store new one
                                                ios::app will append the new data to the existing data in the file*/
    ofs<<"ani"<<endl;
    ofs<<22<<endl;
    ofs<<"MCA"<<endl;

    ofs.close(); /*its imp to close the file after opening it or creating it*/
}
