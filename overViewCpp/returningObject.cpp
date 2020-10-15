#include<iostream>

using namespace std;

class c1{
    int value;
    //int frequency;
    public:
    void setValue( int i);
    int getValue();
};
void c1::setValue(int i){
    value=i;
}

int c1::getValue(){
    return value;
}
c1 function(c1 x);
int main(){
    cout<<"Hell's this World!"<<endl;
    c1 obj1,obj2;
    obj1.setValue(3);
    obj2=function(obj1);
    cout<<"Value is: "<<obj2.getValue();
    return 0;
}

c1 function(c1 x){
    c1 f;
    f=x;
    return f;
}