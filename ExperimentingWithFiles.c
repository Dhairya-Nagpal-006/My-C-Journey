#include <stdio.h>

int main() {
    FILE *ptr;
    /*ptr = fopen("text.txt","r");
    char c;
    c=fgetc(ptr);
    printf("%c",c);
    return 0;*/
    ptr = fopen("text.txt","w");
    fputc('c',ptr);


    fclose(ptr);
    return 0;
}