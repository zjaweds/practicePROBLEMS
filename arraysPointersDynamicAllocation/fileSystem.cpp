#include<stdio.h>

// using namespace std;

int main(int argc, char *argv[]){
    FILE *fp;
    char ch;

    if(argc!=2){
        printf("Missed the file name \n");

        // exit(1);
        return 1;
    }
    if((fp= fopen(argv[1], "w"))== NULL){
        printf("Can't open file \n");
        // exit(1);
        return 1;
    }
    do{
        ch = getchar();
        putc(ch, fp);
    } while (ch != '$');
    
    fclose(fp);
    return 0;
}