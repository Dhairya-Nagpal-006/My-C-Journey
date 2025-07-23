#include <stdio.h>

int main() {
    int a;
    int b=0;
    printf("Enter the number");
    scanf("%d", &a);
    for(int i = 2; i<a ; i++) {
        if(a%i==0) {
            b = 1;
        }

    }

    if (b) {
        printf("The number is not prime\n");
    } else {
        printf("The number is prime\n");
    }
    return 0;
}