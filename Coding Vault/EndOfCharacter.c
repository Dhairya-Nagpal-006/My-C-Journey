#include <stdio.h>

int main() {
    char ch;
    FILE *ptr;
    ptr = fopen("text.txt","r");
    while(1){
        ch = fgetc(ptr);
        printf("%c",ch);

        if(ch == EOF){
            // break;
            printf("\nKHATAM TATA BYE BYE");
            break;
        }
    }
    fclose(ptr);
    return 0;
}