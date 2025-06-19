/*this is set, just change the name from vector to set*/
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> v= {5,8,4,7,6}; /*how we declare set*/
    v.insert(20);
    v.insert(30); /*will add the value at the end of the set*/

    v.erase(4); /*removes the desired element*/

    /*there are 2 ways to iterate through this, for each loop or by using an iterator*/

    cout<<"set traversing through iterator: "<<endl;
    set<int>::iterator itr; /*now this itr is actually a pointer so when we print it we dereference it*/
    for(itr= v.begin();itr!=v.end();itr++){ /*u get the gist of it, shuru karo v.begin se jab tak itr barabar nhi hojata end ke*/
        cout<<*itr<<endl; /*now what this statement will do is that it will increment the values inside the list as it is a pointer we can do it*/
        // cout<<++*itr<<endl; cant do this, as in set the output is unique
    }

    cout<<"set traversing through for each loop: "<<endl;
    for(int x:v){ /*this is for each loop*/
        cout<<x<<endl;
    }
       
}