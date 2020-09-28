/*
1. Objects of a class can be passed to a function
2. If parameterized constructors is/are there then constructor with matching actual
parameters will be called for each object but only default destructor will be called
for destroyment of each object.
3. Objects in a function are local to that function only and they exixt as long
as the control is within the function and get destroyed with exit of the control
from the function.
*/
#include<iostream>

using namespace std;

class c1{
    int value;
    public:
    c1(int val);
    ~c1();
    void show();
};
c1::c1(int i){
    value=i;
    cout<<"Object Constructed/created.\n";
}
c1::~c1(){
    cout<<"Object destroyed\n";
}
void c1::show(){
    cout<<"Value for this object: "<<value<<endl;
}
void createObj(c1 x);
int main(){
    c1 obj1(10);
    createObj(obj1);
    return 0;
}
void createObj(c1 z){
    z.show();
}