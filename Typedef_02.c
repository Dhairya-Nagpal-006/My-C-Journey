#include <stdio.h>
typedef struct complex{
    int real;
    int img;
} com;
int main() {
    
    com c1;
    scanf("%d",&c1.real);
    scanf("%d",&c1.img);
    printf("THE COMPLEX NUMBER IS %d + %di", c1.real,c1.img);
    
    
    return 0;
}