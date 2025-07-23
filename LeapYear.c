#include <stdio.h>
int main(){
    int a;
    printf("Enter the YEAR");
    scanf("%d",&a);
    if (a %4 == 0 && a%100 != 0 ){
        printf("Leap Year");
    }
    else {
        printf("Not LEAP YEAR");
    }
    return 0;
}