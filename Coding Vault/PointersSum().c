#include <stdio.h>


int sum(int*, int*);
int sum(int *a, int *b){
    *a=6;
    return *a+*b;
}

int main() {
    int x=1; int y = 6;
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    
    return 0;
}