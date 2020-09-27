/*
1. Friend function can be a member of another class and therefore it can have
an object as argument and another object through which it can be invoked
2. Friend functions are not members of a class therefore they can't be inherited
3. Friend functions can't have a storage class specifier like auto,extern etc.
*/

#include<iostream>
#define INUSE 1
#define IDLE 0
using namespace std;
class c2;
class c1{
    int status;
    public:
    void setStatus(int a);
    int idle(c2 a);
};
class c2{
    int status;
    public:
    void setStatus(int b);
    friend int c1::idle(c2 b);
};
void c1::setStatus(int p){
    status=p;
}
void c2::setStatus(int q){
    status=q;
}
int c1::idle(c2 a){
    if(status||a.status) return 0;
    else
        return 1;
}
int main(){
    c1 a;
    c2 b;
    a.setStatus(IDLE);
    b.setStatus(INUSE);
    if(a.idle(b)){
        cout<<" Screen can be used."<<endl;
    }
    else
    {
        cout<<"Screen in use."<<endl;
    }
    return 0;
}