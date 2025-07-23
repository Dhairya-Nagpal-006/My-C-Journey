#include <stdio.h>

int main() {
    int x = 4;
    int*ptr1 = &x;
    int **ptr2 = &ptr1;
    printf("address of x %u\n",&x);
    printf("address of x %u\n",ptr1);
    printf("address of x %u\n",*ptr2);

    printf("value of x %d\n",x);
    printf("value of x %d\n",*ptr1);
    printf("value of x %d\n",**ptr2);

    return 0;
}