/*m and n are 2 integers, starting from 1 to n, add all but not what is diviso=ible by m*/
#include<iostream>
using namespace std;

int show(int m, int n){
    int temp = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i%m == 0)
        {
            continue;
        }else{
            temp += i;
        }
        
    }
    return temp;
}

int main(){
    int m = 2;
    int n = 5;

    cout<<show(m,n);

}