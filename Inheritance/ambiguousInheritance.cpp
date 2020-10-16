#include<iostream>

using namespace std;

class base{
    public:
    int i;
};
class derived1: public base{
    public:
    int j;
};
class derived2: public base{
    public:
    int k;
};

class hybrid: public derived1, public derived2{
    public:
    int l;
};

int main(){
    int j;
    hybrid h;
    h.derived1:: i=10;//Eradication of ambiguity in calling i throgh scope resolution operator
    cout<<"i is: "<<h.derived1::i<<endl;//Eradication of ambiguity in calling i throgh scope resolution operator
    return 0;
}