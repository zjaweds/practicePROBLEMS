/*
Restriction over operators (), [], -> overloading 
They must be overloaded as non static member function and they can't be friend

--- [] ---- Binary operator used for array subscripting
--- () ---- Operator used to pass arguments
--- -> ---- a) used to access accessible elements of the on the left of the arrow i.e invoking object
            b) It returns a pointer to the object of the claas from which invokoing object belongs
--- , ---- Usual function of comma operator is to use the last argument after comma
*/

#include<iostream>

using namespace std;


class Quantity{
    int weight;
    int volume;
    public:
    float density;
    Quantity(){}
    Quantity(int w,int v){
        weight=w;
        volume=v;
        density=weight/volume;
    }
    void showValues(){
        cout<<"Weight: "<<weight<<"\t Volume: "<<volume<<"\tDensity: "<<density<<endl;
    }
    Quantity operator()(int x,int y){
        weight=x;
        volume=y;
        density= weight/volume;
        return *this;
    }
    Quantity operator+(Quantity x);
    Quantity *operator->();
    Quantity operator,(Quantity q){
        weight=q.weight;
        volume=q.volume;
        density=weight/volume;
        return *this;
    }
};
Quantity Quantity::operator+(Quantity x){
        weight = weight+x.weight;
        volume = volume+x.volume;
        density=weight/volume;
        return *this;
}

Quantity * Quantity :: operator->(){
        return this;
}
int main(){
    Quantity q1(100,13),q2(10,16),q3;
    q1.showValues();
    cout<<q1->density<<endl;//Impact of -> overloading
    q1(100,200); //Possible because of () overloading
    q1=q2+q1(10,30);// Used in expression Possible because of () overloading
    q1.showValues();
    q1=(q1,q2(9,9),q3(88,88));//Result will show the effect of , overloading
    q1.showValues();
    return 0;
}