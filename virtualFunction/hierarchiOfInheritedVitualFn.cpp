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
    /*void func(){
        cout<<"Hi from derived1!"<<endl;
    }*/

    //virtual function for this class is not defined but it is still working and 
    //calling the virtual function of the base class
    //Actual reason is that virtual funvtion is inherited and it is hierarchical
    //Virtual function will be called from the last inherited class and if not found
    //will keep on moving further
};

class derived2:public base{
    public:
    void func(){
        cout<<"Hi from derived2!"<<endl;
    }
};
//_________________________________________________________________

class derived22:public derived2{
    public:

};
void function( base &b){//Facilitator of call by object reference
    b.func();
}
//_________________________________________________________________
int main(){
    base b;
    derived1 d1;
    derived2 d2;
    derived22 d22;
    function(b);//Using object refernce 
    function(d1);//It will call the func() defined in base class as it can't find the definition in derived1
    function(d2);//Using object refernce
    function(d22);//It will call the func() defined in derived2 class as func is not defined in derived22 class
    return 0;
}