#include<iostream>
using namespace std; 
int main(){
    
    int n,m;

cout<<"enter the number of rows: ";
cin>>n;

cout<<"enter the number of columns: ";
cin>>m;
    int a[n][m];

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<"enter the number: ";
            cin>>a[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i<=n-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}