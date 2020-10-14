#include<iostream>

using namespace std;
class c1{
    int value;
    public:
    void setValue(int i);
    c1(int i);/*If we don't declare its constructor with one parameter
 won't be compiled successfully. Then we will have to call the
 setValue() for every initialisation.*/
    int getValue();
};
void c1::setValue(int i){
    value=i;
}
c1::c1(int i){
    value=i;
}
int c1::getValue(){
    return value;
}
int main(){
    c1 obj[]={31,13,17,19};
    c1 *ptr;
    ptr = obj;
    for(int i=0;i<4;i++){
        cout<<ptr->getValue()<<"\t";
        ptr++;
    }
    return 0;
}