#include <stdio.h>
float average (int,int , int);
    float average(int a, int b, int c){
        printf("The numbers are %d, %d, %d and the average is %f\n",a,b,c,(a+b+c)/3.0);
        return (a+b+c)/3;
    }

int main() {
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);
    average(x,y,z);

    

    
    return 0;
}