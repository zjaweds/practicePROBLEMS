#include<iostream>

#define SIZE 100

using namespace std;

class Stack{
    int stck[SIZE];
    int tos;
    public:
    void init();
    void push(int i);
    int pop();
};

void Stack::init(){
    tos=0;
}

void Stack::push(int i){
    if(tos==SIZE){
        cout<<"Stack is full.\n";
        return;
    }
    stck[tos]=i;
    tos++;
}

int Stack::pop(){
    if(tos==0){
        cout<<"\nStack is empty.";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    Stack stack1, stack2;
    stack1.init();
    stack2.init();

    stack1.push(1);
    stack1.push(1);
    stack2.push(3);
    stack2.push(9);
    cout<<stack1.pop();
    cout<<stack2.pop()<<endl;
    cout<<stack1.pop();
    cout<<stack2.pop()<<endl;
    return 0;
}