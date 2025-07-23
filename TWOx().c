#include <stdio.h>
int twot(int*a);
int twot(int *a){
    *a=*a*2;
    return *a*2;
}

int main() {
    int x;
    printf("The number is ");
    scanf("%d",&x);
    printf("Before doubling %d\n",x);
    twot(&x);
    printf("After doubling %d\n",x);

    return 0;
}