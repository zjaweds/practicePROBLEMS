#include<iostream>

using namespace std;

class base{
    public:
    int i;
};
class derived1:virtual public base{
    public:
    int j;
};
class derived2:virtual public base{
    public:
    int k;
};

class hybrid: public derived1, public derived2{
    public:
    int l;
};

int main(){
    hybrid h;
    h.i=10;
    cout<<"i is: "<<h.i<<endl;
    return 0;
}