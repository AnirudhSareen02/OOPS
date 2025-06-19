#include<iostream>
using namespace std;
int main(){

   int i= 45;
   int *p = &i;
   int **q= &p;     
   /*this is a pointer pointing to a pointer
   it will hold the same value as the first pointer*/
   
   cout<<*p<<endl;
   cout<<**q<<endl;
   
   cout<<p<<endl;
   cout<<q<<endl;

   cout<<&p<<endl;
   cout<<&q<<endl;
}