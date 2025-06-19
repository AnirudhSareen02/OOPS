#include<iostream>
using namespace std;

int remove(int a[], int n){
    int j=0;

    if (n==0 || n==1)
    {
        return n;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i]!=a[j])
        {
            j++; /*shifts the j to next element*/
            a[j]=a[i];  /*if the element is unique, i(in this case a unique element), will be placed at the location of j(which will be a duplicate)*/
        }
        
    }
    return j+1;
    
}

int main(){
    int a[]={1,1,2,2,3,4,4,5};
    int n= sizeof(a)/sizeof(a[0]);

    n= remove(a,n);

    cout<<"after removing: ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}