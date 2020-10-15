#include<iostream>
#include<cstdlib>

using namespace std;

class c1{
    int num;
    public:
    c1(){
        num=0;
        cout<<"Default Constructor Called"<<endl;
    }
    c1(int i){
        num=i;
        cout<<"Constructor with int arg Called"<<endl;
    }
    c1(const c1 &x){
        int num=0;
        cout<<"Copy Constructor Called"<<endl;
    }
    ~c1(){
        cout<<"Object destructed"<<endl;
    }
    void showNum(){
        cout<<num<<endl;
    }
};
c1 createSibling(c1 x){//It will have 
    cout<<"Inside function createSibling"<<endl;
    c1 y(23);
    y.showNum();
    x=y;//Copy constructor called
    cout<<"Outside of function createSibling"<<endl;
    return x;
}
c1 createSibling(int a){ 
    cout<<"Inside function createSibling with int Arg"<<endl;
    c1 y(a);
    y.showNum();
    cout<<"Outside of function createSibling with int Arg"<<endl;
    return y;
}


int main(){
    c1 o1(10),o3,o4;
    o1.showNum();
    c1 o2(o1);//Calling copy constructor
    o4=createSibling(o1);
    c1 o5=createSibling(5);//Copy Constructor called
    return 0;
}
