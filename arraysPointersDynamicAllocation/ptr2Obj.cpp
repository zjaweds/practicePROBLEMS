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
class c2{
    int value;
    public:
    c2(int i);
    int getValue();
};
c2::c2(int i){
    value=i;
}
int c2::getValue(){
    return value;
}
int main(){
    c1 obj1[]={31,13,17,19};
    c1 *ptr1,*ptr2;
    ptr1 = obj1;
    ptr2=ptr1;
    c2 obj2[]={7,3,5,11};
    c2 *ptr3,*ptr4;
    ptr3 = obj2;
    ptr4=ptr3;

    //ptr4=ptr1; 
    /*If we don't comment above statement it will cause
    compilation error because pointers to same data type
    can be assigned and as classes are abstract data type
    same thing applies here. Although structure of both
    of the classes are same but their name is different
    therefore they are of different data types for the compiler.*/
    for(int i=0;i<4;i++){
        cout<<"C1:C1::C2:C2\t"<<ptr1->getValue()<<"\t"<<(ptr2+3)->getValue()<<"\t"<<ptr3->getValue()<<"\t"<<(ptr4+3)->getValue()<<endl;
        ptr1++;
        ptr2--;
        ptr3++;
        ptr4--;
    }
    return 0;
}