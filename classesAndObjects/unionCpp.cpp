/* Structures and Unions in C can't have function within them but in C++ they can*/
/*Restrictions on union in C++
A terminology POD plain old data i.e no member funtion, constructor and destructor 
1. union can not inherit any class of any type
2.It can not be base class
3.It can not have a virtual function
4.No static variables can be a data member
5.Any object that overloads = operator can't be a member
6.Object having explicit constructor and destructor function can't be a member */

//By default members are public in contrast to class
#include<iostream>

using namespace std;

union mynum{
    void initNum();
    void showNum(int *sn);
    int * swapNum(int i, int j, int *k);
    private:
    int num1;
    int num2;
};

void mynum::initNum(){
    num1=0;
    num2=0;
}
int * mynum::swapNum(int i, int j,int *k){//Returns a pointer to 
    int temp;
    temp=i;
    i=j;
    j=temp;
    k[0]=i;
    k[1]=j;
    return k;
    //showNum(i,j);//member functions of same class can use each other
}
void mynum::showNum(int *sn){
    cout<<*sn<<endl;
    sn++;
    cout<<*sn<<endl;
}
int main(){
    int arr[5];
    mynum m;
    m.initNum();
    m.showNum(m.swapNum(2,3,arr));//Function of the same class can be called
    return 0;
}