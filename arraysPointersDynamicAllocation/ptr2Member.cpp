#include<iostream>

using namespace std;

class c1{
    public:
    int value;
    c1(int i);
    int getValue();
};
c1::c1(int i){
    value=i;
}
int c1::getValue(){
    return value;
}
int main(){
    c1 obj1(1),obj2(2),*pDt,*pMf;
    int (c1::*func)();
    int c1::*value;
    value=&c1::value;
    func=&c1::getValue;
    pDt=&obj1;
    cout<<(obj1.*func)()<<"\t";
    cout<<(pDt->*func)()<<endl;
    pDt=&obj2;
    cout<<(obj2.*func)()<<"\t";
    cout<<(pDt->*func)()<<endl;
    return 0;
}