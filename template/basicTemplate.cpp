/*

Generic functions are automatically overloaded according to the type of the data but they are not applicable if no of 
arguments vary therefore more template definitons may be required.


Template or generic functions can be overloaded explicitly and they will be used for specified parameters not the generic one

General function overloading is supported as of now for explicit overloading but new overloading definition is as follows

inside underscores
____________________________

template<> return_type function_name<data_type>(data_type,data_type){
    //--
    //--
}
______________________________
Right now there is a confusion what is to be mentioned inside angle brackett following function name 
if more than one type of data are to be operated upon by the function. There may be comma separation I think but
have not explored so far to be updated later



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