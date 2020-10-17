/*
Concepts seeking serious attention
-- definition of the member function outside the class
-- Objects should be initialized at the time of declaration

Just the concatenation of different types of data at the end of the first argument
*/


#include<iostream>
const int SIZE=100;
using namespace std;

template<class Stacktype1, class Stacktype2> class c1{
    Stacktype1 st1;
    Stacktype2 st2;
    public:
    c1(Stacktype1 a, Stacktype2 b){
        st1= a;
        st2= b;
    }
    void show();
};
template <class Stacktype1, class Stacktype2> void c1<Stacktype1,Stacktype2>::show(){
    cout<<st1<<st2<<endl;
}

int main(){
    char greet[]="Hi this is the edge of the Universe";
    char terminator='!';
    c1<char *,char> c(greet,terminator);
    c1<int,int> d(10,20);
    c.show();
    d.show();
    return 0;

}