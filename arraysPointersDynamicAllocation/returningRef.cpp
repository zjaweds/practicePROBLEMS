#include<iostream>

using namespace std;

char &substitue(int i);
char s[80]="Hell  s this World!";

int main(){
    substitue(5)='i';//This replaces space just before s to i
    cout<<s<<endl;
    return 0;
}

char &substitue(int i){
    return s[i];
}