//normally when we declare an array its created in stack memory not in heap, if we want to create in heap we do dynamic memory allocation ->
#include<iostream>
using namespace std;
int main(){
    //we use NEW keyword to make array or any variable in heap instead of stack  because stack has very low storage and heap is big
    int*p = new int;
    *p= 10;
    cout<<*p<<endl;
    /*we use pointer because in new int we dont have any variable declared so we use pointer to create a variable*/

    //we now will allocate memory dynamically in an array
int n;
    int *ptr= new int[n];
    cout<<"how many elements: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>ptr[i];
    }
    
    int max= -1;
    for (int i = 0; i < n; i++)
    {
        if (max < ptr[i])
        {
            max= ptr[i];
        }
        
    }
   cout<<"max num is: "<<max;
// in dynmic memory allocation we have to deallocate the memory manually like this so it doesnt lead to memory leakage 
// because in dynamic memory allocation, the same variable is used again and again like recycle 

delete [] ptr; // for deleting array
delete p;   //for normal deletion of variable or pointer

//we should use delete after the completion of task and no at the end but this was only for demonstration
}
