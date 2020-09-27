/*
1. It is just a request to the compiler to expand the functioon code at each
invocation rather than calling the function everytime
2. Acceptance or rejection of the request depents upon the siz of the code within
the function block
3. For making a function inline its definition should be preceded by inline keyword
4. Inline functions are very efficient
5. Since classes require frequently executed interface function to access data
member therefore efficiency of these functions are critical
6.For compilers Typically a recursive function can't be made inline
7. Inline function may be class member its definition is same as the general
member function only addition is keyword inline precedes everything
*/
#include<iostream>

using namespace std;

class c1{
    int a,b;
    public:
    void init(int a, int b);
    void show();
};
inline void c1::init(int p, int q){
    a=p;
    b=q;
}

inline void c1::show(){
    cout<<a<<" "<<b<<endl;
}
int main(){
    c1 c;
    c.init(10,20);
    c.show();
    return 0;
}