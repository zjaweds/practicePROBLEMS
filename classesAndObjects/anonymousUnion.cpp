/*
1. Union without name
2. All restrictions on union are enforced here too
3. Global anonymous unions must be declared as static 
4. It can't contain any function
5. Its members are public they can't be private or protected
6. Its objects can't be declared
7. Its members are accessed just like other local variables
8. As its variables are just like local variables in that block
therefore members should not have same name as any local variable
9.Basically all members of the anonymous union share the same memory
 therefore just like unions in C this union will have the size equal
 to the size of variable with largest size*/

 #include<iostream>
 #include<cstring>

 using namespace std;

int main(){
union{
     int precision;
     float value;
     char greet[10];
 };
 precision=5;
 cout<<precision<<endl;
 value=10000.7834;
 cout<<value<<endl;
 strcat(greet,"Hell!");
 cout<<greet<<endl;
 return 0;
}