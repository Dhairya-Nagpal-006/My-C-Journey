#include <stdio.h>

int main() {
    int a;
    int b = 1;
    int c = 2;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(c<a) {
        if(a%c==0) {
            b = 1;
            break;
        }
        c++;
    }
    if (b) {
        printf("The number is not prime\n");
    } else {
        printf("The number is prime\n");
    }
    return 0;
}