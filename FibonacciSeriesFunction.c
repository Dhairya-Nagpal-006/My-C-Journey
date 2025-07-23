// fibonacci series :
// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765
#include <stdio.h>
int fibonacci(int);
int fibonacci(int a){
    if (a== 2 || a== 1){
        return a-1; // base condition ya base case
    }
    return fibonacci(a-1)+ fibonacci(a-2);
}

int main() {
    int x;
    printf("Enter the number of terms in the fibonacci series: ");
    scanf("%d", &x);
    printf("The fibonacci series at %d is %d\n",x, fibonacci(x));

    return 0;
}