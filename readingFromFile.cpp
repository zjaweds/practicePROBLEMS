#include<stdio.h>

// using namespace std;

int main(int argc, char *argv[]){
    FILE *fp;
    char ch;

    if(argc!=2){
        printf("Missed the file name \n");
       return 1;
    }
    if((fp= fopen(argv[1], "r"))== NULL){
        printf("Can't open file \n");
        return 1;
    }
    ch = getc(fp);
    while (ch != EOF){
        putchar(ch);
        ch = getc(fp);
    } ;
    
    fclose(fp);
    return 0;
}