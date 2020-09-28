/*
Apart from accessing members from a class scope resolution
operator also facilitates access of a global variable
in enclosing block inside a function having a variable with same name.
*/
#include<iostream>

using namespace std;

int i=20;//Global in this file
void show();
int main(){
    show();
    return 0;
}

void show(){
    int i=10;
    //Accessing the local i
    cout<<"Value of i within the function is: "<<i<<endl;
    //Accessing the global i
    cout<<"Value of i within the function is: "<<::i<<endl;
}