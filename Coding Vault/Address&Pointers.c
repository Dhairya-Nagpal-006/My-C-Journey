#include <stdio.h>
// Value se address
// Address se value.
int main() {
    int a=6;
    int *b = &a;
    printf("The address of a is %p\n",b);
    printf("The value at b is %d\n",*b);

    return 0;
}