#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v= {5,8,4,7,6}; /*how we declare vector*/
    v.push_back(20);
    v.push_back(30); /*will add the value at the end of the vector*/

    v.pop_back(); /*removes the last element*/

    /*there are 2 ways to iterate through this, for each loop or by using an iterator*/

    cout<<"vector traversing through iterator: "<<endl;
    vector<int>::iterator itr; /*now this itr is actually a pointer so when we print it we need to dereference it*/
    for(itr= v.begin();itr!=v.end();itr++){ /*u get the gist of it, shuru karo v.begin se jab tak itr barabar nhi hojata end ke*/
        // cout<<*itr<<endl; this will print the vector as it is
        cout<<++*itr<<endl; /*now what this statement will do is that it will increment the values inside the vector as it is a pointer we can do it*/
    }

    cout<<"vector traversing through for each loop: "<<endl;
    for(int x:v){ /*this is for each loop*/
        cout<<x<<endl;
    }
       
}