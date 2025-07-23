#include <stdio.h>

int main() {
    int i = 1;
    int a;
    int s=0;
    printf("Enter the number");
    scanf("%d",&a);
    for(i=1; i<=a; i++){
        s += i;
    }
    printf("The sum is %d",s);
    return 0;
}