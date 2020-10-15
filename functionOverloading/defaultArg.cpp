#include<iostream>

using namespace std;

void clrscr(int size=2);

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