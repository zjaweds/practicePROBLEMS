#include<stdio.h>
#include<string.h>

int main(){
    char *p1;
    char s[90];
    do{
        p1 = s;
        fgets(s);
        while (*p1){
            printf(" %d",*p1++);
        }
    }while(strcmp(s, "done"));
    return 0;
}