#include <stdio.h>

int main()
{
    int c;
    printf("The principal amt is :");
    scanf("%d",&c);
    int e;
    printf("The time period is :");
    scanf("%d",&e);
    float g;
    printf("The rate of interest is :");
    scanf("%f",&g);
    float h;
    h= (c*e*g)/100;
    printf("The simple interest is %f",h);
    
    
    return 0;
}