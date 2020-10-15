#include<iostream>

using namespace std;

int main(){
    cout<<"Hell's this World!"<<endl;
    int a;
    int &ref=a; //Initialization is mandatory

    a=10;
    a+=a;
    cout<<a<<"\t"<<ref<<endl;

    a=13;
    ref+=ref;//Through results of operation we can see it is just another name to the same variable
    a--;
    cout<<a<<"\t"<<ref<<endl;

    return 0;
}