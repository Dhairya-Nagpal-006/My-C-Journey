#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int*ptr = a;
    ptr = ptr + 2;
    printf("Value at ptr+2 is %d", *ptr);
    return 0;
}