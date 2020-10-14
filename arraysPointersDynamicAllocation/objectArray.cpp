#include<iostream>

using namespace std;

class c1{
    int value;
    public:
    c1(int i);
    void showDetails();
};
c1::c1(int i){
    value=i;
}
class c2{
    int value;
    int frequency;
    public:
    c2(){value=0;}
    c2(int i, int f);
    void showValue();
};
c2::c2(int i, int f){
    value=i;
    frequency=f;
}
void c2::showValue(){
    cout<<"Values = "<<value<<endl;
    cout<<"Frequency = "<<frequency<<endl;
}
void c1::showDetails(){
    cout<<"Value is: "<<value<<endl;
}

int main(){
    c1 obj1[4]={1,2,3,4};//We can't declare without initialisation
    c2 obj2[4];//Declaration without error
    c2 obj3[4]={
        c2(1,4),c2(2,14),c2(3,10),c2(4,6)
    };
    for(int i=0;i<4;i++){
        obj1[i].showDetails();
        obj2[i].showValue();
        obj3[i].showValue();
    }
    return 0;
}