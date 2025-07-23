#include <stdio.h>

int main() {
    int a;
  
    printf("Enter a number: ");
    scanf("%d", &a);
    for(int b=0; b<=10;b++){
        printf("%d x %d = %d\n", a, b, a * b);

    }    
    return 0;
}