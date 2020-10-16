/*
Restriction over operators (), [], -> overloading 
They must be overloaded as non static member function and they can't be friend

---[]---- Binary operator used for array subscripting
*/




#include<iostream>

using namespace std;

class Quantity{
    int w[3];
    public:
    void setValues(int i,int j, int k){
        w[0]=i;
        w[1]=j;
        w[2]=k;
    }
    int &operator[](int i);//This way it can be used on both side i.e left or right
    
    //int operator[](int i); Only on the right side both of them together will create ambiguity
};
int &Quantity::operator[](int i){
    if(i<0||i>2){
        cout<<"Boundary Error"<<endl;
        exit(1);
        //C++ doesn't have boundary checking but this way it can be achieved
    }
    return w[i];
}

int main(){
    Quantity q1,q2;
    q1.setValues(10,13,59);
    q2.setValues(10,16,43);
    q2[2]=100;
    cout<<q1[2]<<endl;
    cout<<q2[5]<<endl;
    return 0;
}