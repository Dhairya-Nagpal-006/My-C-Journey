#include <stdio.h>

int main() {
    int a[10];
    for(int i=0;i<10;i++){
        printf("ENTER THE %dTH ELEMENT OF THE ARRAY\n",i);
        scanf("%d",&a[i]);
    }
    printf("THE REVERSED ARRAY");
        for(int i=9;i>0;--i){
            printf("%d\t",a[i]);
        }
    return 0;
}
/*
INCASE OF HARD INPUT

#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    
    
    printf("THE REVERSED ARRAY");
        for(int i=9;i>=0;--i){
            printf("%d\t",a[i]);
        }
    return 0;
}
*/