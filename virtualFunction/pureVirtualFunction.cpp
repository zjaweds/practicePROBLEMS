#include<iostream>

using namespace std;

class base{
    public:
    //We can pass arguments in virtual function just for the sake of conveniece and lack of time 
    //caused this simple code to be written
    virtual void func()=0;//It enforces to define virtual function in every inherited class
};
class derived1:public base{//Lack of mandatory definition cause compile time error
    public:
    void func(){
        cout<<"Hi from derived1!"<<endl;
    }
};

class derived2:public base{
    public:
    void func(){//Lack of mandatory definition cause compile time error
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
   // base b; can't be declared because of virtual class definition as pure has made it abstract class
    derived1 d1;
    derived2 d2;
    derived22 d22; 
    function(d1);
    function(d2);//Using object refernce
    function(d22);//It will call the func() defined in derived2 class as func is not defined in derived22 class
    return 0;
}