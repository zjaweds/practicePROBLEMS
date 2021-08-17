#include<iostream>

using namespace std;

int main(){
    int x, *p;
    x = 10;
    p = &x;
    cout<<*p<<endl;
    return 0;
}