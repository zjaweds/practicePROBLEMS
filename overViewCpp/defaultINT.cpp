#include<iostream>
#include"addition.cpp"//Using self defined header file addition.cpp a cpp program

using namespace std;

int readnum();
main(){
    printf("Hell's this World! %f",add(2,3));
    //return EXIT_SUCCESS;
}

int readnum(){/* if we do not put int before definition,
as per standard C++ program would not be executed successfully*/
    int n;    
    cout<<"\nEnter a number: ";
    cin>>n;
    return n;
}