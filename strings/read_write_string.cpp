#include<iostream>
#include<string>
#include<limits>
using namespace std;

int main(){
    
    /*char a[20];
    cout<<"enter your name: ";
    cin>>a; 

    cout<<"welcome "<<a<<endl;

    char b[20];
    cout<<"enter your name: ";
    cin>>b; 

    cout<<"welcome "<<b<<endl;*/

    // now this will print steve in first string and jobs in second, because it treats space as null and the jobs will be stored in input buffer and hence will be printed in the next string.
    // now how to solve this issue -> use get or getline or use ignore().

    // char s[20];
    // cout<<"enter name: ";
    // cin.get(s,20);

    // cout<<"welcome -> "<<s;

    // char s2[20];
    // cout<<"enter name: ";
    // cin.get(s2,20);

    // cout<<"welcome -> "<<s;

    //here the same thing happens, just google why, because the enter key will be treated like this by the get function
    //now you can use getline or ignore.

    char s[20];
    cout<<"enter name: ";
    cin.getline(s,20);

    cout<<"welcome -> "<<s<<endl;

    // cin.ignore();  //getline will work fine but you can also use this, even with the get function.  // another thought!, leave this and use getlline

    char s2[20];
    cout<<"enter name: ";
    cin.getline(s2,20);

    cout<<"welcome -> "<<s2<<endl;

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

    string str;
    cout<<"enter your name: ";
    cin>>str;

    cout<<str<<endl; // string in c++, but it will not read any character after space and will store in input buffer whuch can cause us problem further
    
    cin>>str;
    cout<<str<<endl;
    
/*see, this shows expample of input buffer, when we write 2 words the second gets printed as next string. this shows that the 2nd word after the next 1st word 
is stored in input buffer and when we try to take second string as an input, it doesnt let us, and prints the 2nd word in the next string */

cin.ignore(numeric_limits<streamsize>::max(),'\n'); // for clearing input buffer because if i hadnt had put this code and press enter after the upper code, the next getline function would have treated my enter as a nextline and would have outputed me an empty string

/*what you can do is use getline function to make up for it*/

    string a;
    cout<<"enter string: ";
    getline(cin,a);

    cout<<a<<endl;

}