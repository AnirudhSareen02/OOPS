#include<iostream>
using namespace std;

enum day {mon=10, tue, wed, thu, fri, sat, sun};
/*the key value of next element will start from what is either default of user defined, in this case, as mon is 10 the next values will be 11, 12, 13 etc*/

int main(){
    day d; /*this is how it is declared*/

    /*idk how to explain? but lets see*/

    d= tue;
    // d++; /*cant alter anything in enum, so its constant*/

    cout<<d;/*enum will not output the string but the key value associated with it so 1 for tue and staring 0 from mon*/
}