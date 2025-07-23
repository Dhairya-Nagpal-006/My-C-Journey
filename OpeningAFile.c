#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("text.txt","w");
    int num;
    num = 11301;
    fprintf(ptr , "%d",num);
    
    fclose(ptr);
    return 0;
}