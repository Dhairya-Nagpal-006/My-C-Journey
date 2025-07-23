#include <stdio.h>

int main() {
    int a= 5;
    int *b = &a; // pointer variable b is assigned the address of a
    int **c= &b; // pointer variable c is assigned the address of b
    
    
    printf("Value of a=%d\n",a);
    /*
    yeh batayaega value of a ko
    */
    printf("Address of a=%p\n",&a);
    /*
    yeh batayaega address of a ko
    */
    printf("Value of b=%p\n",b);
    /*
    yeh batayaega value of b ko
    b is a pointer variable, so it will print the address of a
    */
    printf("Address of b=%p\n",&b);
    /*
    yeh batayaega address of b ko
    */
    printf("Value of c=%p\n",c);
    /*
    yeh batayega value of c ko
    c is a pointer variable, so it will print the address of b
    */
    printf("Address of c=%p\n",&c);
    /*
    yeh batayega address of c ko
    */
    return 0;
}