#include <stdio.h>
int sum(int,int);
    int sum(int x, int y){
        printf("The sum is %d\n", x + y);
        return x+y;
    }
int mul(int,int);
int mul(int x, int y){       // x & y are parameters
    printf("The product is %d\n", x * y);
    return x*y;
}
int div(int,int);
int div(int x, int y){
    printf("The quotient is %f\n",(x)/y);
    return x/y;
}
int sub(int,int);
int sub(int x, int y){
    printf("The subtraction result is %d\n",x-y);
    return x-y;
}
int main() {
    int a = 1;
    int b = 2;
    int c  =  a+b;
    printf("The sum is %d\n", a+b);
    
    int a1=22;
    int a2=55;
    sum(a1, a2);// a1 a2 are arguments
    mul(a1, a2);
    div(a1, a2);
    sub(a1, a2);

    int a3=45;
    int a4=55;
    sum(a3, a4);
    mul(a3, a4);
    div(a3, a4);
    sub(a3, a4);

return 0;
}
