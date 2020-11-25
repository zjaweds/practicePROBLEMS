#include<iostream>
#include"addition.cpp"//Using self defined header file addition.cpp a cpp program

using namespace std;

int readnum();
main(){
    int num1,num2;
    printf("Enter numbers");
    num1=readnum();
    num2=readnum();
    printf("Hell's this World! %f",add(num1,num2));
    return EXIT_SUCCESS;
}

int readnum(){/* if we do not put int before definition,
as per standard C++ program would not be executed successfully but
as of now it is fine without int too*/
    int n;    
    cout<<"\nEnter a number: ";
    cin>>n;
    return n;
}