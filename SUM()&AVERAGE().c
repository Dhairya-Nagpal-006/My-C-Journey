#include <stdio.h>
int sum(int, int);
int sum(int a, int b) {
    printf("Sum is %d\n", a + b);
    return a + b;
}
float avr(int, int);
float avr(int a, int b) {
    printf("Average is %f\n", (a + b)/2.0);
    return (a+ b)/2.0;
}
int main() {
    int x=4;
    int y=6;
    sum(x,y);
    avr(x,y);
    
    return 0;
}