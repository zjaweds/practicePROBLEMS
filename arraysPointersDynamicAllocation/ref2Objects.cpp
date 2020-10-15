#include<iostream>

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
    int i;
    cout<<"Hell's this World!"<<endl;
    c1 obj;
    obj.setNum(7);
    obj.neg(&obj); //After return from this destructor is executed
    cout<<"Negaive of the number is:";
    obj.showNum();
    obj.square(obj);//After return from this destructor is not executed
    cout<<"Square of the number is:";
    obj.showNum();
    return 0;
}