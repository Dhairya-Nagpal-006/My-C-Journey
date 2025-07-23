#include <stdio.h>
#include<stdlib.h>

int main() {
    int n=6;
    int*ptr;
    ptr = (int*)malloc(6*sizeof(int));
    ptr[0] = 5;
    

    free(ptr);
   

    printf("%d\n",ptr[0]);
    
    
    return 0;
}