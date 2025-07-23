#include <stdio.h>
#include<stdlib.h>

int main() {
    int n=6;
    int*ptr;
    ptr = (int*)malloc(5*sizeof(int));
    ptr[0] = 5;
    ptr[1] = 10;
    ptr[2] = 20;
    ptr[3] = 25;
    ptr[4] = 30;
    ptr[5] = 35;

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);
    printf("%d\n",ptr[5]);
    
    return 0;
}