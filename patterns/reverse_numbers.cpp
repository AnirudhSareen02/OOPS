#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter rows: ";
    cin>>rows;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
    cout<<endl;
    }
    return 0;
}