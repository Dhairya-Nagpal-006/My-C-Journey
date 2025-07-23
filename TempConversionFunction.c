#include <stdio.h>
float temp(float);
float temp (float a){
    float b;
    b = 9.0/5.0*a + 32;
    printf("The temp in cel is %f and in fah it is %f\n",a,b);
    return b;
}

int main() {
    float x;
    printf("Enter the temp in cel: ");
    scanf("%f", &x);
    temp(x);
    
    return 0;
}