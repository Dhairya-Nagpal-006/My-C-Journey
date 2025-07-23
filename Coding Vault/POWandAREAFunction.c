#include <stdio.h>
#include <math.h>
int area(int);
int area(int a){
    printf("The area of the square is %d units\n", a * a);
    return a * a;

}
int main(){
    int x;
    printf("Enter the side of the square: ");
    scanf("%d", &x);
    area(x);

    int y;
    printf("Enter the side of the square: ");
    scanf("%d", &y);
    printf("The area of the square is %d units\n", pow(y,2));// is line ki ootput 0 aayegi kyunki pow function ka rereturn type double hota h
     printf("The area of the square is %f units\n", pow(y,2)); // yeh hogi correct output
    return 0;
}