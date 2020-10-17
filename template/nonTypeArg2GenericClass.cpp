/*
Passed same as aruments of object type but treated as constant they can't be changed 
*/


#include<iostream>
using namespace std;

template<class Stacktype,int SIZE> class stack{
    Stacktype stck[SIZE];
    public:
    stack(){
        register int i;
        for(i=0;i<SIZE;i++)
            stck[i]=i;
    }
    Stacktype &operator[](int i);
};

template <class Stacktype,int SIZE> Stacktype &stack<Stacktype,SIZE>::operator[](int i){
    if(i>SIZE-1||i<0){
        cout<<"Out of bounds"<<endl;
        //SIZE++;  We can't do this because it is passed as constant
        exit(1);
    }
    return stck[i];
}

int main(){
    stack<int,10> s1;
    stack<double,20> d1;
    int i;
    for(i=0;i<10;i++){
        s1[i]=i;
        d1[i]=(double)i/4;
        cout<<"Popped value int: "<<s1[i]<<"\t Popped value double: "<<d1[i]<<endl;
    }
    return 0;

}