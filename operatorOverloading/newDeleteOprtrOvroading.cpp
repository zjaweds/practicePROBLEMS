/*

*/




#include<iostream>
#include<cstdlib>
#include<new>

using namespace std;


class Quantity{
    int weight;
    int volume;
    public:
    void setValues(float w,float v){
        weight=w;
        volume=v;
    }
    void setValues(int w,int v){
        weight=w;
        volume=v;
    }
    void showValues(){
        cout<<"Weight: "<<weight<<"\t Volume: "<<volume<<endl;
    }
    void *operator new(size_t size);
    void operator delete(void *p);
};
void *Quantity::operator new(size_t size){
    void *p;
    cout<<"Inside overloaded new"<<endl;
    p= malloc(size);
    if(!p){
        bad_alloc ba;
        throw ba;
    }
    return p;
}

void Quantity::operator delete(void *p){
    cout<<"In overloaded delete"<<endl;
    free(p);
}

int main(){
    Quantity q1,q2,*ptr;
    try{
        ptr=new Quantity;
    }
    catch(bad_alloc xa){
        cout<<"Allocation Failed!"<<endl;
        return 1;
    }
    q1.setValues(10,13);
    q2.setValues(10,16);
    (q1+100).showValues();
    (100+q2).showValues();
    delete ptr;
    return 0;
}