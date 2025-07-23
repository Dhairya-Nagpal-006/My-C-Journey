#include <stdio.h>

int main() {
    int num;
    num = 10;
    FILE *ptr;
    ptr = fopen("text1.txt","w");
    for (int i = 1; i<11 ; i++){
        fprintf(ptr,"%d x %d =%d\n",num, i , num*i);
    }
    fclose(ptr);
    return 0;
}