/*
1. By declaring a static data member you are making every object of that class to
have same copy of that data member.
2. Declaration should be done using scope resolution operator and therefore
it becomes a local variable in that program. Therefore for that member memory 
exists even before creation of any object of that class.
3. Declaration inside a class does not allocate any memory to the vaiable
4. By default every static data member of a class are initialized by 0 before
creation of any object of that class.
5. Class declaration is just a logical construct it doesn't have any physical
reality.
6. Older C++ didn't require redeclaration, but it was leading to several inconsistecies.
7. To access public static data member without object we need to specify the class name.
8. Static data member are useful when we need resources to be shared to every object
of that class. Also used to keep track of the number of objects in existence
*/

#include<iostream>

using namespace std;

class students{
    static int nOfStudents;
    public:
    void setNStdnts(int i);
    students();
    ~students();
    void showNstdnts();
};
students::students(){
    nOfStudents++;
}
students::~students(){
    nOfStudents--;
    cout<<"Destroyed an object"<<endl;//For the purpose of tracking the flow
}
int students::nOfStudents;//Declaring data member as Global variable
void students:: setNStdnts(int i){
    nOfStudents=i;
    students s;
    cout<<"Number of students already existing: "<<nOfStudents<<endl;
}
void students::showNstdnts(){
    cout<<"No of students: "<<nOfStudents<<endl;
}

int main(){
    students s1,s2,s3;
    s1.setNStdnts(10);
    s1.showNstdnts();
    return 0;
}