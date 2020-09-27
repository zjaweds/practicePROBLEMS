/*
Benefits of a friend function 
A.Certain types of operator overloading can be achieved by friend function only
B.Friend functions make the creation of some types of I/O functions easier.
C.In some cases two or more classes may contain members that are interrelated
relative to other parts of the program
1. Friend function a non member function having access to all private, protected and public
2. As it is not a member of the class in which it is declared so it can't be accessed 
through object using dot operator, it can access data of the class by having object of that 
class as argument.
3. It is declared just like other functions in the class but it is preceded by friend
keyword and it is defined without scope resolution operator 
4.As a friend function it can access data members directly
*/
#include<iostream>

using namespace std;

class base{
    int a,b;
    public:
    friend int sum(base x);//Declaration of friend class
    void setab(int p, int q);
};
int sum(base b){//Definition of friend class
    return b.a+ b.b;
}
void base::setab(int p, int q){
    a=p;
    b=q;
}

int main(){
    base n;
    n.setab(2,3);
    cout<<sum(n);//Calling friend function having object as an argument
    return 0;
}