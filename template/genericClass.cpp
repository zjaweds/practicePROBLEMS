#include<iostream>
const int SIZE=100;
using namespace std;

template<class Stacktype> class stack{
    Stacktype stck[SIZE];
    int tos;
    public:
    stack(){
        tos=0;
    }
    void push(Stacktype ob);
    Stacktype pop();
};

template <class Stacktype> void stack<Stacktype>::push(Stacktype ob){
    if(tos==SIZE){
        cout<<"Stack is full"<<endl;
        return;
    }
    stck[tos]=ob;
    tos++;
}
template <class Stacktype> Stacktype stack<Stacktype>::pop(){
    if(tos==0){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    cout<<"Hell's this World!"<<endl;
    stack<char> s1,s2;
    stack<int> i1,i2,i3;
    s1.push('S');
    cout<<"Popped value: "<<s1.pop()<<endl;
    i1.push(7);
    cout<<"Popped value: "<<i1.pop()<<endl;
    s1.push('T');
    cout<<"Popped value: "<<s1.pop()<<endl;
    i2.push(5);
    cout<<"Popped value: "<<i2.pop()<<endl;
    return 0;

}