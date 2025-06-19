#include<iostream>
using namespace std;

class Myexception1{};
class Myexception2:public Myexception1{};

int main(){
    try
    {
        throw string("my bro"); /*change this to anything and it will execute that catch, int, string, double, class, etc*/
    }
    catch(Myexception2 e){ /*child class catch always comes first*/
        cout<<"child class catch";
    }
    catch(Myexception1 e){ /*parent class catch will come second*/
        cout<<"parent class catch";
    }
    catch(int e){
        cout<<"int catch";
    }
    catch(double e){
        cout<<"double catch";
    }
    catch(string &e){
        cout<<"string catch";
    }
    catch(...){/*... is called ellipsis, and this catch will catch anything, but it should always comes last as it wont let other catch work*/
        cout<<"all catch";
    }
    /*it is suggested not to use all catch very often as it shows that you as a programmer donot care about specifying the error made*/
}