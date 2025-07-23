// CALL BY VALUE

#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    return a+b;
}
int main() {
    int x= 5;
    int y = 10;
    printf("The sum of 5 and 10 is %d\n", sum(5, 10));
    printf("The value of x is %d\n", x);

    
    return 0;
}