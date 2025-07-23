#include <stdio.h>

int main() {
    int a;
    int b=1;
    int c=1;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    while(b <= a) {
        c *= b;
        b++;
    }
    printf("The factorial is %d\n", c);
    return 0;
}