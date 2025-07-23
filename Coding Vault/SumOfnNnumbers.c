#include <stdio.h>

int main() {
    int a;
    int i = 1;
    int s=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(i<=a) {
        s += i;
        i++; 
       ; 
    }
    printf("The sum is %d", s);
    return 0;
}