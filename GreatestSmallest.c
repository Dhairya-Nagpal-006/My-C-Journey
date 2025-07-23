#include <stdio.h>
int main (){
    int a,b;
    printf("a=?");
    scanf("%d",&a);
    printf("b=?");
    scanf("%d",&b);

    (a>b)? printf("a is greater"):printf("b is greater");

    return 0;

}