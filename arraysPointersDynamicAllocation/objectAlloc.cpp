#include<iostream>
#include<new>

using namespace std;

class c1{
    int num;
    public:
    c1(){
        cout<<"Constructor called"<<endl;
    }
    ~c1(){
        cout<<"Destructor called"<<endl;
    }
    void setNum(int i){
        num=i;
    }
    void neg(c1 *j){
        j->num = - j->num;
    }
    void square(c1 &r){
        r.num*=r.num;
    }
    void showNum(){
        cout<<num<<endl;
    }
};

int main(){
    cout<<"Hell's this World!"<<endl;
    c1 *p,*q,*r;
    try{
        /*As arrays can't have initializer for dynamic memory allocation,therefore
        if a class contains constructor function it should be parameterless to have
        array of objects*/
        /*For initialized version parameterized constructor is needed*/
        p= new c1;//Calls constructor for successful allocation
        cout<<"Allocation for single object Successful!"<<endl;
        q=new c1[10];
        cout<<"Allocation for array of objects Successful!"<<endl;
    }   
    catch(bad_alloc xa){
        cout<<"Allocation failed!"<<endl;
        return 1;
    }

    /*------------------------------------  Fails if not commented---------------
    r=new(nothrow) int(19);
    if(!r){
        cout<<"Allocation failed"<<endl;
        return 1;
    }
    cout<<"\t"<<*r<<"\t"<<endl;
    delete r; 


    ------------------------------------  Fails if not commented---------------*/


    /*After allocation is successful every
    other operations are as of normal array of objects*/
    p->setNum(13);
    p->showNum();
    delete p;
    delete []q;
    
    return 0;
}