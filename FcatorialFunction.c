#include <stdio.h>

int  factorial(int);


int factorial(int n){
    if (n == 0 || n == 1) { // base condition ya base case
        return 1;
    }

    return factorial(n-1) * n;
}

int main() {
    int a=5;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}
