#include <stdio.h>

int main() {
    int a[11];
    int b[10];
    for(int i = 1; i<11; i++){
        printf("5 x %d = %d\n",i,i*5);
        a[i] = i * 5;
    }
    printf("The array of multiplication table of 5 is:\n");
    for(int i = 1; i<11; i++){
        printf("%d\n ", a[i]);
    }

    
    int x;
    printf("Enter the number to find its multiplication table: ");
    scanf("%d", &x);
    for(int i = 1; i<11; i++){
        printf("%d x %d = %d\n", x, i, x * i);
        b[i] = x * i;
    }
    printf("The array of multiplication table of %d is:\n", x);
    for(int i = 1; i<11; i++){
        printf("%d\n ", b[i]);
    }


    return 0;
}