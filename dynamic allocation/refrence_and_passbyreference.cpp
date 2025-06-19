#include<iostream>
using namespace std;

//function cretated for pass by reference ->
void increment(int& n){
    n++;
}

// reference variable ->
int main(){
    int i= 10;
    int& j= i;  //this is called a reference variable in which there is no other memory space assigned to j, it is on the same memory as i
    /*it is like one person has 2 different names, so if we change i, j will give us the new updated value*/
    i++;
    cout<<i<<endl<<j<<endl;

    //it will also work vice versa, by changing the value of j, i will also be modified as both are on same memory space

    int k= 100;
    j=k;
    cout<<i<<endl<<j<<endl;

//pass by reference ->

/*pass by reference is mainly used in functions, after this we have created the function void increment!!!! */
/*the increment function we have created, effectivly adds 1 to the variable. Now this will not be reflected in a on its own 
so, we use pass by reference here by putting & in front of n. this way the changes will be reflected in a */

int a= 15;
increment(a);
cout<<a<<endl;  /*now thw value of a will be printed as 16 instead of 15
but if we had normal int n as the parameter of the increment function we would get 15 only which is called pass by variable*/

/*note - 
it is a bad idea to return reference through the function as the memory created will be temmporary so u cant use it again*/
}