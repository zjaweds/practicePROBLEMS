/* Structures and Unions in C can't have function within them but in C++ they can*/


/*Restrictions on union in C++
A terminology POD plain old data i.e no member funtion, constructor and destructor 
1. Structure can not inherit any class of any type
2.It can not be base class
3.It can not have a virtual function
4.No static variables can be a data member
5.Any object that overloads = operator can't be a member
6.Object having explicit constructor and destructor function can't be a member */

//By default members are public in contrast to class
#include<iostream>
#include<cstring>

using namespace std;

struct mystr{
    void initStr(char *s);
    void showStr();
    private:
    char str[100];
};
void mystr :: initStr(char *s){
    if(!*s) *str='\0';
    else
    {
        strcat(str,s);
    }
}
void mystr ::showStr(){
    cout<<str;
}
int main(){
    char name[]="Jawed Alam";/*ISO C++ forbits conversion of string
    constant to char type pointer*/
    char initValue[] ="\0";
    mystr s;

    s.initStr(initValue);
    s.initStr(name);
    s.showStr();
    return 0;
}