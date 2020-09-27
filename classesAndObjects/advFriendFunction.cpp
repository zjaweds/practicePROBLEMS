/* C.In some cases two or more classes may contain members that are interrelated
relative to other parts of the program
-->A friend function during its declaration can use object of any
other class and for that either the class should be defined
prior to the declaration of friend function using the class or
it should have a forward declaration of that class prior to the
declaration of friend function*/

#include<iostream>
#define IDLE 0
#define INUSE 1
using namespace std;
class c2;
class c1{
    int status;
    public:
    void setStatus(int state);
    friend int idle(c1 x, c2 y);//class declaration for c2 is required before using it
};

class c2{
    int status;
    public:
    void setStatus(int state);
    friend int idle(c1 x, c2 y);
};
void c1::setStatus(int state){
    status=state;
}
void c2::setStatus(int state){
    status=state;
}
int idle(c1 x, c2 y){
    if(x.status||y.status)
        return 0;
    else
        return 1;   
}
int main(){
    c1 a;
    c2 b;
    a.setStatus(IDLE);
    b.setStatus(IDLE);
    if (idle(a,b)) cout<<"Screen in use"<<endl;
    else cout<<"Screen can be used."<<endl;
    a.setStatus(INUSE);
    if (idle(a,b)) cout<<"Screen in use"<<endl;
    else cout<<"Screen can be used."<<endl;
    return 0;
}