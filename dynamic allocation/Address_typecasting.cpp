//typecasting is converting one type of data to another, like from int to char
#include<iostream>
using namespace std;
int main(){
    int i = 65;
    char a = i;
    cout<<a<<endl; //this will print the ascii value of 65 that is A

    int* p= &i;
    // char* pc= p; /*if you remove this comment the compiler will give us an error, the reason is listed below ->*/
    
    //this is called implicit typecasting where the compiler is automatically converting the data type. 
    /* now this gives an error because the compiler is saying its wrong */  
 
    char* pc= (char*)p;
    /*this will called explicit typecasting where we have to explain to compiler to not give any error, its like manualy making rules */

    cout<<"address of p: "<<p<<endl; //this gives us the address of pointer p
    cout<<"value of where p is pointing : "<<pc<<endl; //now this will not give us address but will give the value of where p is pointing because of typecasting
    
    cout<<*p<<endl; //value of pointer pointing to the memory space
    cout<<*pc<<endl; //this also gives us the value

    /*now according to us when we enter the value of int variable int takes 4 bytes and the value entered will be stored in the rightmost
    bit, so we use following lines of code to test this theroy*/

    cout<<*(p+1)<<endl; //will give us the 2nd byte of the int variable which according to us will be 0 or null
    cout<<*(p+2)<<endl; //will give us the 3rd byte of the int variable which according to us will be 0 or null
    cout<<*(p+3)<<endl; //will give us the 4th byte of the int variable which according to us will be 65 as according to us it was stored in last place or the rightmost place

/*now these all values are giving us some garbage value but we shouldnt get any garbage or null value for the p+3 because according to us 
it was storing 65
so we conclude that it was stored in the first byte that is the leftmost byte
there are 2 types - left endian and right endian google it and you will get it*/
}