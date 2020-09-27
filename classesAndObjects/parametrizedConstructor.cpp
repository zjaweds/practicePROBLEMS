/*
1.Parameterized constructors have parameters just like any other fuction having 
parameters.
2. After declaration of parameterised constructor whenever parameters are 
given during creation of the object the constructor which matches the parameters
type and number as well will be called.
3. As function overloading is there, there can be several parameterized constructors
but only one default constructor.
4. One benefit of parameterized constructor is it actually allows calling another
function to initialise values of the object after calling default constructor
*/

#include<iostream>

using namespace std;

class motion{
    int s,v;
    public:
    motion(int disp, int vel);
    void show();
};
motion::motion(int i,int j){
    s=i;
    v=j;
}
void motion::show(){
    cout<<"Displacement: "<<s<<" Velocity: "<<v<<endl;
}
int main(){
    motion m(3,10);
    motion p=motion(4,10);/*Equivalent to motion p(4,10) but it has some
    relation with copy constructor*/
    m.show();
    p.show();
    return 0;
}