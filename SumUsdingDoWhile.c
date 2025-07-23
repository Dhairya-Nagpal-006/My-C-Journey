#include <stdio.h>

int main() {
    int a;
    int i=1;
    int s= 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    do {
        s += i;
        i++;
    } while (i <= a);
    printf("The sum is %d\n", s);
    return 0;
}