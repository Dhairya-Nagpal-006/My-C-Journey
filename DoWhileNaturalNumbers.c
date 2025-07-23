#include <stdio.h>
int main(){
    int a;
    int b=1;
    printf("Enter the number till where you want the natiural numbers :");
    scanf("%d",&a);
    do {
        printf("The natural number is %d\n ",b);
        b++;
    } while(b<=a);
    return 0;   
}