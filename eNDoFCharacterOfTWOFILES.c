#include <stdio.h>

int main() {
    int c;
    FILE *ptr = fopen("text1.txt", "r");
    FILE *ptr1 = fopen("text2.txt", "w");

    

    while ((c = fgetc(ptr)) != EOF) {
        fputc(c, ptr1);
        fputc(c, ptr1);
    }

    fclose(ptr);
    fclose(ptr1);
    return 0;
}