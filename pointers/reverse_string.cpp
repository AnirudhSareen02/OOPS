#include<iostream>
using namespace std;

void reversestring(char * str, int size){
    char *a= str;
    char *b= str + size - 1;

    while (a<b)
    {
       char temp= *a;
       *a= *b;
       *b= temp;

       a++;
       b--;
    }
    
}

int main(){
    char str[]= "Anirudh";
    int size= sizeof(str)/sizeof(str[0])-1;

    cout<<"before reverse: "<<str<<endl;
    reversestring(str, size);
    cout<<"after reverse: "<<str<<endl;
}

