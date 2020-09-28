/*
As of now local classs seems to be a nonsense because
1. It can only acces static variables or variable declared
as extern of the function in in which it is declared
2. Its members should be defined within the class
3. It may access type names and enumerators defined
by the enclosing function
4. Local class can't have a static variables.
*/
#include<iostream>
#include<cstring>

using namespace std;

char *concate(char *, char *, char *);


int main(){
    char city[]="San Francisco";
    char separator[]=", ";
    char state[]="California";
    cout<<concate(city,separator, state);
    return 0;
}

char *concate(char *c, char *se, char *s){
    static char fString[100];
    static char city[20];
    static char state[20];
    static char sep[20];
    strcpy(city,c);
    strcpy(state,s);
    strcpy(sep,se);
    class c1
    {
    public:
    void init(){
        strcat(fString, city);
        strcat(fString, sep);
        strcat(fString, state);
    }
    };
    c1 ch;
    ch.init();
    return fString;
}