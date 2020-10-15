#include<iostream>

using namespace std;

/*
Operator overloading can be achieved by friend function or member function only  
Further details after more exloration
*/


class Quantity{
    int weight;
    int volume;
    public:
    void setValues(float w,float v){
        weight=w;
        volume=v;
    }
    void setValues(int w,int v){
        weight=w;
        volume=v;
    }
    void showValues(){
        cout<<"Weight: "<<weight<<"\t Volume: "<<volume<<endl;
    }
    Quantity operator+(Quantity x){
        Quantity temp;
        temp.weight=weight+x.weight;
        temp.volume=volume+x.volume;
        return temp;
    }
    Quantity operator-(Quantity x){
        Quantity temp;
        temp.weight=weight-x.weight;
        temp.volume=volume-x.volume;
        return temp;
    }
    Quantity operator++(){
        weight++;
        volume++;
        return *this;
    }
    Quantity operator=(Quantity x){
        weight=x.weight;
        volume=x.volume;
        return *this;
    }
};

int main(){
    Quantity q1,q2;
    q1.setValues(10,13);
    q2.setValues(10,16);
    (q1+q2).showValues();
    (q1-q2).showValues();
    (q1=q2).showValues();
    (++q1).showValues();
    return 0;
}