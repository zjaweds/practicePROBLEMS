/*
Template or generic functions can be overloaded and they will be used for specified parameters not the generic one


template
<class crawler>
void sswap(crawler &x, crawler &y)
{
    crawler temp;

    temp=x;
    x=y;
    y=temp;
} 
Valid template definition but we can't add any other thing in between the separated elements

like 

template
int i;
<class crawler>
int j;
void sswap(crawler &x, crawler &y)
{
    crawler temp;

    temp=x;
    x=y;
    y=temp;
} 
declaration of variable is causing this error in this case


*/



#include<iostream>

using namespace std;

template <class crawler> void sswap(crawler &x, crawler &y){
    crawler temp;

    temp=x;
    x=y;
    y=temp;
 }
 template <class X, class Y,class Z> void rverse(X a, Y b, Z c){//Overloading of << required in case of objects of classes
     cout<<c<<b<<a<<endl;
 }
int main(){
    int i=13,j=31;
    char a='A',b='B';
    cout<<"Original: i: "<<i<<"\t j:"<<j<<endl;
    sswap(i,j);
    cout<<"Swapped: i: "<<i<<"\t j:"<<j<<endl;
    cout<<"Original: a: "<<a<<"\t b:"<<b<<endl;
    sswap(a,b);
    cout<<"Swapped: a: "<<a<<"\t b:"<<b<<endl;
    rverse(10,20,30);
    return 0;
}