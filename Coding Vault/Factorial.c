#include <stdio.h>

int main() {
    int i =1;
    int s=1;
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        s *= i;
    }
    printf("The factorial is %d\n", s);
    return 0;
}