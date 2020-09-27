#include<iostream>
#define SIZE 100
using namespace std;

class stack{/*A class can't have object of the same class
but it can have pointer to the object of same class*/
    int stck[SIZE];
    int tos;
    public:
    stack();
    ~stack();
    void push(int i);
    int pop();
};
stack::stack(){
    tos=0;
    cout<<"Stack initialized."<<endl;
}
stack:: ~stack(){
    cout<<"Stack destroyed"<<endl;
}

void stack::push(int i){
    if(tos==SIZE){
        cout<<"Stack is full."<<endl;
        return;
    }
    stck[tos]=i;
    tos++;
}

int stack:: pop(){
    if(tos==0){
        cout<<"Stack is empty."<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    stack s1,s2;
    s1.push(1);
    s1.push(1);
    s2.push(3);
    s2.push(9);
    cout<<s1.pop()<<s2.pop()<<endl;
    cout<<s1.pop()<<s2.pop()<<endl;
    return 0;
}