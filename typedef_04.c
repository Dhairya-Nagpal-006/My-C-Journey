#include <stdio.h>
typedef struct complex{
    int real;
    int img;
} com;
void display(com c){
    printf(" %d + %di\n",c.real,c.img);
}

int main() {
    
    com c[5];
    for (int i = 0; i<5; i++){
        printf("Enter the real part\n");
        scanf("%d",&c[i].real);
        printf("Enter the imaginary part\n");
        scanf("%d",&c[i].img);
    }
    for (int i = 0; i<5 ; i++){
        display(c[i]);
    }
    
    return 0;
}