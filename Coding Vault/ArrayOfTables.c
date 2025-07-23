#include <stdio.h>

int main() {
    int a[3][10]; 
    int b[3] = {2, 7, 9};  

   
    for (int i = 0; i < 3; i++) {          
        for (int j = 0; j < 10; j++) {     
            a[i][j] = b[i] * (j + 1);  
        }
    }

    
    for (int i = 0; i < 3; i++) {
        printf("Table of %d: ", b[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}