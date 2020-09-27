#include<iostream>
#include<cstring>

using namespace std;

class student{
    char name[15];
    char course[5];
    int rollNo;
    public:
    student(char *n, char *c,int r);
    //Constructor having one argument
    student(int k){strcpy(name,"NA"); strcpy(course,"NA");rollNo=k;}
    void show();
};
student::student(char *na, char *co, int ro){
    strcpy(name,na);
    strcpy(course,co);
    rollNo=ro;
}
void student::show(){
    cout<<name<<" "<<course<<" "<<rollNo<<endl;
}

int main(){
    char stName[]="John Hopkins";
    char stCourse[]="MS";
    student s(stName,stCourse,123);
    student p=99;/*Another kind of object initialization if having constructor 
    with one argument, it is actually conversion of integer to that class*/
    s.show();
    p.show();
    return 0;
}