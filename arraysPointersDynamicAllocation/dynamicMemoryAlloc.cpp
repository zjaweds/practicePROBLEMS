#include<iostream>
#include<new>
using namespace std;

int main(){
    cout<<"Hell's this World!"<<endl;
    int *p,*q,*ptrArray;
    try{
        p = new int;//Without initializer 
        q= new int(30);//With initialisation
        ptrArray=new int[5];//Array can't be initialised with declaration
        cout<<"Memory allocated"<<endl;
    }
    catch(bad_alloc xa){
        cout<<"Memory allocation failed"<<endl;
        return 1;
    }
    for(int i=0;i<4;i++){
        *ptrArray=i;
        cout<<"Array["<<i<<"]:"<<*ptrArray<<endl;
        ptrArray++;
    }

    *p=10;
    cout<<"P: "<<*p<<endl;
    cout<<"Q: "<<*q<<endl<<endl;
    delete p;
    delete q;
    delete []ptrArray;
    return 0;
}