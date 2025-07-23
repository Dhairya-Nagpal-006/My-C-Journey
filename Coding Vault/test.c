#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    
    
    printf("THE REVERSED ARRAY");
        for(int i=9;i>=0;--i){
            printf("%d\t",a[i]);
        }
    return 0;
}


