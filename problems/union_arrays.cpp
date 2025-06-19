/*2 arrays, print their union a={1,2,3,4},b={3,4,5,6}, output= {1,2,3,4,5,6}*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> sorted(vector<int> a, vector<int> b){
    int n= a.size(); /*initialize the size*/
    int m= b.size();
    vector<int> unionarr; /*create a new vector array*/

    int i, j = 0; /*initialize 2 pointers to 0*/

    while (i<n && j<m) /*condition that whileboth i and j are not exhasuted or they donot go out of bounds*/
    {
        if(a[i]<=b[j]){
            if (unionarr.size()==0 || unionarr.back()!=a[i]) /*check if last element of unionarr is equal to a[i]*/
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if (unionarr.size()==0 || unionarr.back()!=b[j]) /*check if last element of unionarr is equal to b[j], it would'nt be copied if we already added it in a[i]*/
            {
                unionarr.push_back(b[j]); /*if not already presend inside the vecotr them add it*/
            }
            j++;
        }
    }

    while (j<m) /*this is in case the first vector array is exhausted/becomes out of bound*/
    {
         if (unionarr.size()==0 || unionarr.back()!=b[j])
            {
                unionarr.push_back(b[j]);
            }
            j++;
    }

    while (i<n) /*and this is for when second becomes out of bound*/
    {
        if (unionarr.size()==0 || unionarr.back()!=a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;
    }

    return unionarr; /*return the vector we stored and made*/
}

int main(){
    vector<int> a={1,2,3,4};
    vector<int> b={3,4,5,6};

    vector<int> result = sorted(a, b); // store the result of the union

    for (int num : result) {
        cout << num << " ";
    }
}