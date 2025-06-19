#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m; /*map uses keys and values*/  /*how we declare map*/
    m.insert(pair<int,string>(1,"anirudh"));        /*how we insert*/
    m.insert(pair<int,string>(2,"ravi"));
    m.insert(pair<int,string>(3,"chandra"));

    /*how to traverse this?*/

    map<int,string>::iterator itr;
    for(itr=m.begin(); itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;  /*the first is the key and the second is the value, reminder again, itr is a pointer*/
    }

    map<int,string>::iterator itr1;
    itr1=m.find(2);
    cout<<itr1->first<<" "<<itr1->second<<endl; /*this is how we find an element in map*/
}