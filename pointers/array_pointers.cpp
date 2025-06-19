//this will show the difference in pointers and array
#include<iostream>
using namespace std;
int main(){
    
    int a[10];
    cout<<sizeof(a)<<endl;  //this is an array of size 10 and every int has 4 bytes, so total size is 40

    int* p = &a[0];
    cout<<sizeof(p)<<endl;  //a pointer will have 8 bytes

}