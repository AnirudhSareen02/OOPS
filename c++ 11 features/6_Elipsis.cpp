/*elipsis is like your printf, scanf function in c, elipsis takes a variable number of arguments, (...) is elipsis */
#include<iostream>
#include<cstdarg>
using namespace std;

int sum(int n, ...){ /*int n is the size, ... is elipsis*/
    va_list list; /*this is for accessing the arguments passed or to hold the state of variable*/
    va_start (list, n); /*this is for starting/initializing the argument list, and n is the size*/

    int x;
    int s= 0; /*to store sum of arguments*/
    for (int i = 0; i < n; i++)
    {
        x= va_arg(list, int); /*va_arg will take the elements one by one and we have to define the data type, its used to retrieve elements*/
        s += x; /*this will add to the sum*/
    }
    va_end(list); /*clean up the va_list afer use*/
    return s; /*display the sum*/
}

int main(){
    cout<<sum(5,1,2,3,4,5); /*first 5 is the size and then are. the elements*/
}