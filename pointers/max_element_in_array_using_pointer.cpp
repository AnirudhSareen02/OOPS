#include<iostream>
using namespace std;

int main()
{
    int lim;
    cout<<"enter how many elements you want: ";
    cin>>lim;
    int arr[lim];
//input numbers in array
    for (int i = 0; i < lim; i++)
    {
        cout<<"enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }

    //we store the value of 1st element in *p 
    int *p = arr;
    //we then declare it as maximum
    int max= *p;
    //run the loop to iterate through the array and check for the largest number, every large number we find we replace it with previous in max
    for (int i = 1; i < lim; i++)
    {
        if (*(p+i)>max){
            max= *(p+i);
        }
    }
        cout<<"the biggest element in the array is: "<<max;
    
    return 0;
}