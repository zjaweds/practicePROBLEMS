/*
Restriction over operator overloading 
__ Precedence of operators can't be changed
__ Number of operands can't be changed but we can ignore an operand simply while defining the function
__ Operator functions can't have default argument

__________ ., ::, .*, ? (dot, scope resolution, dot asterisk, ternary operator)
                      operators can't be overaloaded_____________

__ Except ----assignment(=)----- operator all overloaded operators are inherited by derived classes
but still derived classes amy have their own definition of operators

__ We can do anything inside overloaded operator functions but they should be relevant
and according to the normal implication but it is not mandatory

__ One beautiful example is <<, >> operators overloaded for i/o operations
but usually they are used as bit shift operators

*/




#include<iostream>

using namespace std;

/*
Operator overloading can be achieved by friend function or member function only  
Further details after more exloration
*/


class Quantity{
    int weight;
    int volume;
    public:
    void setValues(float w,float v){
        weight=w;
        volume=v;
    }
    void setValues(int w,int v){
        weight=w;
        volume=v;
    }
    void showValues(){
        cout<<"Weight: "<<weight<<"\t Volume: "<<volume<<endl;
    }
    Quantity operator+(Quantity x){
        Quantity temp;
        temp.weight=weight+x.weight;
        temp.volume=volume+x.volume;
        return temp;
    }
    Quantity operator-(Quantity x){
        Quantity temp;
        temp.weight=weight-x.weight;
        temp.volume=volume-x.volume;
        return temp;
    }
    Quantity operator++(){//Prefix increment 
        weight++;
        volume++;
        return *this;
    }
    Quantity operator++(int x){/*Postfix increment for this explictly int x should
    be passed as an argument*/ 
        weight++;
        volume++;
        return *this;
    }
    Quantity operator=(Quantity x){
        weight=x.weight;
        volume=x.volume;
        return *this;
    }
    Quantity operator--(){/*Postfix increment for this explictly int x should
    be passed as an argument*/ 
        weight--;
        volume--;
        return *this;
    }
    Quantity operator--(int x){/*Postfix decrement for this explictly int x should
    be passed as an argument*/ 
        weight--;
        volume--;
        return *this;
    }
    Quantity operator +=(Quantity x){//For other shorthand we have to follow the same procedure
        weight=weight+x.weight;
        volume=volume+x.volume;
        return *this;
    }
};

int main(){
    Quantity q1,q2;
    q1.setValues(10,13);
    q2.setValues(10,16);
    (q1+q2).showValues();
    (q1-q2).showValues();
    (q1=q2).showValues();
    (q1++).showValues();
    (++q1).showValues();
    (q1--).showValues();
    (--q1).showValues();
    (q1 += q2).showValues();
    return 0;
}