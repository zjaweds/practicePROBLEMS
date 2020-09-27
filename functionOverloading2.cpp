#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

void stradd(char *s1, char *s2);
void stradd(char *s1, int i);

int main(){
    char s1[]="Jawed";
    char s2[]=" Alam";
    stradd(s1,s2);
    cout<<endl;
    stradd(s1,137);
    return EXIT_SUCCESS;
}

void stradd(char *s1, char *s2){
    puts(strcat(s1, s2));
}

void stradd(char *s1, int i){
    char temp[80];
    sprintf(temp,"%d",i);
    puts(strcat(s1,temp));
}