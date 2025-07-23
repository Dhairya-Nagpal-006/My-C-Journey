#include <stdio.h>
// N WHOLE NUMBERS IN REVERSE ORDER
int main(){
    int a;
    printf("Enter the value till which you need the values");
    scanf("%d",&a);
    for(int i = a ; i>= 0 ; --i){
        printf("%d\n",i);
    }
    return 0;
}