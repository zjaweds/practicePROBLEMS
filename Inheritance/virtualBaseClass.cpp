#include<iostream>

using namespace std;

class base{
    public:
    int i;
};
class derived1:virtual public base{//Eradicated ambigutiy through virtual base class
    public:
    int j;
};
class derived2:virtual public base{//Eradicated ambigutiy through virtual base class
    public:
    int k;
};

class hybrid: public derived1, public derived2{
    public:
    int l;
};

int main(){
    hybrid h;
    h.i=10;//If not used virtual base class it will raise ambiguity
    cout<<"i is: "<<h.i<<endl;//If not used virtual base class it will raise ambiguity
    return 0;
}