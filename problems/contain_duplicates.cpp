#include<iostream>
using namespace std;

bool duplicate(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]==a[j])
                {
                    return true;
                } 
        }
        
    }return false;
    
}
    

int main(){

    int a[]= {1,2,3,4,5,6,7,8,9,1};
    int n = sizeof(a)/sizeof(a[0]);

    

    if (duplicate(a,n)==true)
    {
        cout<<"true";
    }else{
        cout<<"false";
    }

}