#include <stdio.h>

int main() {
    int i = 88;
    printf("The address of i is %p",&i);// j is an integer pointer
    printf("\nThe address of i is %u",&i);



    int *j=&i; // pointer variable j is assigned the address of i
    printf("\nThe address of i is %p",j);
    printf("\nThe address of i is %u\n" ,&i);



    printf("The value at address j is %d\n",*j);// Pointer the value at address j


    char a = 'A';
    char *k = &a; // pointer variable k is assigned the address of a    
    printf("The address of a is %p\n",k);

    float b = 3.14;
    float *l = &b; // pointer variable l is assigned the address of b   
    printf("The address of b is %p\n",l);



    
    
    return 0;
}