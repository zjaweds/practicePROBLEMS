#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char *p1;
    char s[90];
    p1 = s;
    do{
        gets(s);


    }whilw(strcmp(s, "done"));
    return 0;
}