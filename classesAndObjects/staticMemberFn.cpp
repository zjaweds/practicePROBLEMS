/*
1. Member functions may be declared static but they can access only static members
of the class directly using scope resolution operator or they can also access
global data and functions. But they can access other data members through objects.
2. This pointer is not available for static member function.
3. Same function can't have both static and non-static version.
4. It can't be declared as const or volatile.
if a function is declared as volatile it can access both volatile and nonvolatile
data but if not declared volatile then it can only access non volatile data.
Same is the case for const.
5. It can't be a virtual function.
*/
#include<iostream>


using namespace std;


class c1{
    static int resource;
    public:
    static int getResource();
    void freeResource(){
        resource=0;
    }
};
int c1::resource=1;//By default static variables are initialized to 0
int c1::getResource(){
    if(resource)
        return 0;
    else
    {
        resource=1;
        return 1;
    }
}
class c2{
    static int i;
    public:
    static void init(int j);/*Through this function we can initialize a static
    variable even before creation of an object because of static member function*/
    void show(){
        cout<<"Value is: "<<i<<endl;
    }
};
int c2::i;
void c2::init(int k){
    i=k;
}
int main(){
    c1 ob1,ob2;
    if(c1::getResource())//Accessing static member functio without object
        cout<<"ob1 has resource\n";
    if(!c1::getResource())
        cout<<"ob2 denied resource\n";
    ob1.freeResource();
    if(ob2.getResource())//Accessing static member function through object
        cout<<"ob2 can now use resources\n";
    
    c2::init(10);//Initializing before creation of an object
    c2 ob3;
    ob3.show();
    return 0;
}