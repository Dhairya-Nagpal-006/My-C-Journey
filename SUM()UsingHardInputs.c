// CALL BY VALUE

#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    return a+b;
}

int main() {
    printf("The sum of 5 and 10 is %d\n", sum(5, 10));
    
    return 0;
}