/*this is a problem statement of adding 2 rational numbers and outputting the sum with operator overloading*/

#include<iostream>
using namespace std;

class rational{
    private:
        int p, q;

    public:
        rational(){ /*default constructor*/
            p=1;
            q=1;
        }
        rational (int p, int q){ /*parameterized constructor*/
        this->p= p;
        this->q= q;
        }
        rational(const rational &r){ /*copy constructor*/
            this->p= r.p;
            this->q= r.q;
        }

    int getP(){return p;} /*accessors*/
    int getQ(){return q;}
     
    void setP(int p){     /*mutators*/
        this->p = p;
    }
    void setQ(int q){
        this->q= q;
    }

    rational operator+(rational r){
        rational temp;
        temp.p= this->p * r.q + this->q *r.p;
        temp.q= this->q * r.q;
        return temp;
    }

    friend ostream & operator<<(ostream &os, rational &r);
}; 

    ostream & operator<<(ostream &os, rational &r){
        os<<r.p<<"/"<<r.q;
        return os;
    }
int main(){
    rational r1(5,3), r2(2,6), r3;
    r3= r1+r2;
    cout<<r3;
}