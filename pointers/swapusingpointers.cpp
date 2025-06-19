#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"enter 1st number: ";
    cin>>num1;

    cout<<"enter second number: ";
    cin>>num2;

    int *p= &num1;
    int *q= &num2;

int temp= *p;
*p = *q;
*q = temp;

cout<<"after swaping 1st number is: "<<*p <<endl<<"second number is: "<<*q;

    return 0;
}