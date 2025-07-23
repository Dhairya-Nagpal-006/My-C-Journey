#include <stdio.h>

int main() {
    int a;
  
    printf("Enter a number: ");
    scanf("%d", &a);
    for(int b=a; b>=0;--b){
        printf("%d x %d = %d\n", a, b, a * b);

    }    
    return 0;
}