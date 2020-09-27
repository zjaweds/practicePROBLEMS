/*
1. If a member function is defined within the class then it becomes an inline
function depending upon the size of the code.
2. We can use inline keyword but it is not necessary at all.
3. Making show() function inline is of no use as i/o operations create more
overhead than function calls.
4. In professionally written codes smaller functions are made inline they are
usually defined within the class.
5. Constructor and destructor functions can be made automaticlly inline if 
defined within the class or defining it explicitly outside the class
*/

#include<iostream>

using namespace std;

class c1{
    int a,b;
    public:
    inline void init(int p, int q){
    a=p;
    b=q;
}
    void show(){//Automatic inline
    cout<<a<<" "<<b<<endl;
}
};
int main(){
    c1 c;
    c.init(10,20);
    c.show();
    return 0;
}