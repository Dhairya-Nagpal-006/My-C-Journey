#include <stdio.h>
int pyramid(int);
int pyramid(int a){
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int b;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &b);
    pyramid(b);
   
    return 0;
}