#include<iostream>

using namespace std;

class base{
    public:
    void func(){
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
int main(){
    base b,*pb;
    derived1 d1,*pd1;
    derived2 d2,*pd2;
    pb=&b;
    pd1=&d1;
    pd2=&d2;
    b.func();
    d1.func();
    d2.func();
    cout<<endl;
    pb->func();
    pd1->func();
    pd2->func();
    return 0;
}