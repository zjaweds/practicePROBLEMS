#include<iostream>

using namespace std;

int abso(int i);
int abso(double d);
long  abso(long l);

int main(){
    cout<< abso(-10) <<endl;
    cout<< abso(12.0) <<endl;
    cout<< abso(-9L) <<endl;
    return 0;
}

int abso(int i){
    cout<<"Using integer version "<<endl;
    return i<0?-i:i;
}

int abso(double d){
    cout<<"Using double version "<<endl;
    return d<0.0?-d:d;
}

long abso(long l){
    cout<<"Using double version "<<endl;
    return l<0?-l:l;
}
