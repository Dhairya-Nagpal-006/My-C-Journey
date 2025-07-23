#include <stdio.h>
void sum(int *a, int *b);
void sum(int *a,int *b){
    int add;
    add = *a + *b;
    printf("The sum is %d\n",add);
}
void average(int *a, int*b);
void average(int *a, int*b){
    float avr;
    avr = (*a+*b)/2;
    printf("The average is %d\n",avr);
}

int main() {
    int x = 5;
    int y = 15;
    sum(&x,&y);
    average(&x,&y);
    

    
    return 0;
}