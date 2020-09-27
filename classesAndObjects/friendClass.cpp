/*
1. Member functions of a Friend class and the friend class itself declared within
another class have access to all members of the later class including the private 
members
2. Critical point is the friend function only has access to the members of the class
whose friend it is but it the friend class does not inherit those members.
3. Friend class is seldom used to get some specific purpose fulfilled
*/


//Minimum of the two values
#include<iostream>

using namespace std;

class c1{
    int a,b;
    public:
    void setValues(int p, int q);
    friend class c2;//Friend class declaration
};
class c2{//Friend class definition
    public:
    int min(c1 ob);
};
void c1::setValues(int r, int s){
    a=r;
    b=s;
}
int c2::min(c1 o){
    return o.a > o.b ? o.b : o.a;//Ternary operator for minimum calculation
}

int main(){
    c1 object;
    object.setValues(103,2);
    c2 m;
    cout<<m.min(object)<<endl;
    return 0;
}