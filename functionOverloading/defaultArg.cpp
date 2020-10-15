#include<iostream>

using namespace std;

void clrscr(int size=2);
/*

Questions what if several arguments are there but while calling the function we don't need to pass all the arguments
like 1st,3rd,4th,6th arguments are there but 2nd and fifth are not required?

Ans-> This is not possible we have to give nondefault and default arguments in sequence

We can also override the default values by putting condition and assigning some other value
*/
int main(){
    clrscr();//with default argument 2 lines clear
    cout<<"Hell's this World!"<<endl;
    clrscr(10);//with argument 10 lines clear
    cout<<"Almost Heaven used to be this World back then!"<<endl;
    return 0;
}

void clrscr(int size){
    for(;size;size--){
        cout<<endl;
    }
}

/*
One major benefit of using having default argument can help in definition of constructor of class 
if we give more than one arguments and all of them are default then we can have both initialized and
uninitialized object throgh the same constructor function and we don't need to overload constructor
function.
*/