/*
Restriction over operators (), [], -> overloading 
They must be overloaded as non static member function and they can't be friend

---[]---- Binary operator used for array subscripting
---()---- Operator used to pass arguments

*/

#include<iostream>

using namespace std;


class Quantity{
    int weight;
    int volume;
    public:
    Quantity(){}
    Quantity(int w,int v){
        weight=w;
        volume=v;
    }
    void showValues(){
        cout<<"Weight: "<<weight<<"\t Volume: "<<volume<<endl;
    }
    Quantity operator()(int x,int y){
        weight=x;
        volume=y;
        return *this;
    }
    Quantity operator+(Quantity x);
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
Quantity Quantity:: operator+(Quantity x){//Overloading as member function
        Quantity temp;
        temp.weight=weight+x.weight;
        temp.volume=volume+x.volume;
        return temp;
}
int main(){
    Quantity q1(10,13),q2(10,16);
    q1.showValues();
    (100+q2).showValues();
    q1(100,200); //Possible because of () overloading
    q1=q2+q1(10,30);// Used in expression Possible because of () overloading
    q1.showValues();
    return 0;
}