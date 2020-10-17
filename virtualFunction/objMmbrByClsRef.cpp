/*
Application of virtual function
Run time polymorphism All required information required while running but not at the time of
compilation this is where virtual function is helpful because according to the calling
object member is called
*/


#include<iostream>

using namespace std;

class base{
    public:
    virtual void func(){
        cout<<"Hi from base class!"<<endl;
    }
};
class derived1:public base{
    public:
    void func(){
        cout<<"Hi from derived1!"<<endl;
    }
};

class derived2:public base{
    public:
    void func(){
        cout<<"Hi from derived2!"<<endl;
    }
};
//_________________________________________________________________

void function( base &b){//Facilitator of call by object reference
    b.func();
}
//_________________________________________________________________
int main(){
    base b;
    derived1 d1;
    derived2 d2;
    function(b);//Using object refernce 
    function(d1);//Using object refernce
    function(d2);//Using object refernce
    return 0;
}