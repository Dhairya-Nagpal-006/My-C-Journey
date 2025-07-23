#include <stdio.h>
int add(int);
int add(int a ){
    if (a==1){
        return 1;
    }

    return a+ add(a-1);
    }


int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The sum till %d is %d\n",x,add(x));

    
    return 0;
}