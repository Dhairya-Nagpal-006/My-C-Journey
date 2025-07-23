#include <stdio.h>

int main() {
    FILE * ptr;
    
    int x;
    ptr = fopen("text4.txt","r");
    fscanf(ptr , "%d",&x);
    fclose(ptr);
    ptr = fopen("text4.txt","w");

    
    fprintf(ptr, "%d",x*2);
    fclose(ptr);
   
    return 0;
}