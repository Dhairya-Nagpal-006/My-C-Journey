#include <stdio.h>

int main() {
    int a[] = {1,2,3};
    int*ptr = a;
    ptr = ptr + 3;
    printf("Value at ptr+2 is %d", *ptr);
    return 0;
}