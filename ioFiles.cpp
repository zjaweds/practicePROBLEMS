#include<stdio.h>

int main(int argc, char *argv[]){
    FILE *in, *out;
    char ch;
    if(argc!=3)
        printf("Missed file names \n");
    if((in = fopen(argv[1], "rb"))==NULL){
        printf("Source file could not be opened \n");
        return 1;
    }
    if((out = fopen(argv[2], "wb"))==NULL){
        printf("Destination file could not be opened \n");
        return 1;
    }
    while(! feof(in)){
        ch = getc(in);
        if(!feof(in))
            putc(ch, out);
    }
    fclose(in);
    fclose(out);
    return 0;
}