#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the Number 1\n");
    scanf("%d",&a);
    printf("Enter the Number 2\n");
    scanf("%d",&b);
    printf("Enter the Number 3\n");
    scanf("%d",&c);
    printf("Enter the Number 4\n");
    scanf("%d",&d);
    if (a>b && a>c && a>d){
        printf("A IS THE GREATEST");
    }
    else if (b>a && b>c && c>d){
        printf("B IS THE GREATEST");
    }
    else if (c>b && c>a && c>d){
        printf("C IS THE GREATEST");
    }
    else if (d>b && d>c && d>a){
        printf("D IS THE GREATEST");
    }
    else{
        printf("ALL ARE EQUAL");
    }
    return 0;
}