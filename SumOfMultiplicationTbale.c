#include <stdio.h>

int main() {
    int a;
    int b;
    int c=0;
    printf("Enter a");
    scanf("%d",&a);
    for(b=0;b<=10;b++){
        c+=(a*b);
    }
    printf("The sum is %d",c);
    return 0;
}