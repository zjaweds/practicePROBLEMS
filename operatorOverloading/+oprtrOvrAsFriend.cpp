/*
Operator overloading adds flexibility and through that we can invoke an operation with 
built in data types as well as by an object of a class

Member overloaded functions pass left operand as this point which leads to incompatible 
operation
*/




#include<iostream>

using namespace std;


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
    
    friend Quantity operator +(int y, Quantity x);
    friend Quantity operator +(Quantity x,int y);
};

Quantity operator+(Quantity x,int y){//Overloading as friend function
        Quantity temp;
        temp.weight=y+x.weight;
        temp.volume=y+x.volume;
        return temp;
    }

Quantity operator+(int y,Quantity x){//Overloading as friend function
        Quantity temp;
        temp.weight=y+x.weight;
        temp.volume=y+x.volume;
        return temp;
    }

int main(){
    Quantity q1,q2;
    q1.setValues(10,13);
    q2.setValues(10,16);
    (q1+100).showValues();
    (100+q2).showValues();
    return 0;
}