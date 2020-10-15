#include<iostream>

using namespace std;

void neg(int &);//This causes automatic call by reference
void square(int *);//This causes manual call by reference

int main(){
    int i=10;
    neg(i);//This causes automatic call by reference
    cout<<"Negative of the given number is: "<<i<<endl;
    square(&i);//This causes manual call by reference
    cout<<"Square of the given number is: "<<i<<endl;
    return 0;
}
void neg(int &i){//This causes automatic call by reference
    i=-i;
}
void square(int *i){/*This causes manual call by reference
because we are making several change to meet the need*/
    *i*=*i; //*i=(*i) * (*i)
}