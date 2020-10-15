#include<iostream>
#define CONDITION 0.000
using namespace std;

int main(){
    if(CONDITION)//Any non-zero value evaluates to true
    {
        printf("\n%f means true!\n",CONDITION);
    }
    else
    {
        printf("\n%f means false!\n",CONDITION);
    }
    
    
    return 0;
}