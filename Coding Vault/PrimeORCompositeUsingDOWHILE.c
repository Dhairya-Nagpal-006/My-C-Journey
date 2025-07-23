#include <stdio.h>

int main() {
    int a;
    int i=2;
    int b = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    do {
        if (a % i == 0) {
            b = 1;
        }
        i++;
    } while (i < a);
    if (b) {
        printf("The number is not prime\n");
    } else {
        printf("The number is prime\n");
    }
    return 0;
}