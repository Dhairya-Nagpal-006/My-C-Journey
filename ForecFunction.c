#include <stdio.h>
float force (float);
float force (float a){
    float b;
    b = 9.8 * a;
    printf("The mass is %2f kg and the force is %3f newtons\n",a,b);
    return b;
}
int main() {
    float x;
    printf("Enter the mass in kg");
    scanf("%d",&x);
    force(x);
    
    return 0;
}