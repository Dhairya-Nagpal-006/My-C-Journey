#include <stdio.h>

int main() {
    int a[3][3][3];
    printf("Enter the elements of the 3x3x3 matrix:\n");
    
    for (int i = 0; i < 3; i++) {   
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("THEW 3D ARRAY IS \n");
     for (int i = 0; i < 3; i++) {   
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d\t",a[i][j][k]);
                
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
    
        for(int i = 0;i<3; i++){
            for(int j= 0;j<3;j++){
                for(int k= 0;k<3; k++){
                printf("%u\n",&a[i][j][k]);
            }
        }
    }
    
     return 0;
}