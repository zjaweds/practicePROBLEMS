/*
1.In a file global objects are created before execution of the main function in a 
file.
2. Within a function block objects are created in order of their declaration and 
destroyed in reverse order.
3. At the time of creation of an object constructor function is called and at the
time of destruction of an object destructor function is called.
*/

#include<iostream>

using namespace std;

class c1{
    static int objCounter;
    public:
    c1();
    ~c1();
} globObj1, globObj2;
int c1::objCounter;
c1::c1(){
    cout<<"Object "<<++objCounter<<" created.\n";
}
c1::~c1(){
    cout<<"Object "<<objCounter--<<" destructed.\n";
}
int main(){
    cout<<"Two objects are already created.(:-)"<<endl;
    c1 a,b;
    return 0;
}