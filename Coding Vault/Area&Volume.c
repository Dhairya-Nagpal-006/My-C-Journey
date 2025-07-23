#include <stdio.h>

int main() {

    int c;
    int h;
    printf("Enter the radius of the circle: ");
    scanf("%d", &c);
    printf("Enter the height of the cylinder: "); 
    scanf("%d",&h);
    printf("The Area of the circle is %.2f\n", 3.14 * c * c);
    printf("The Area of the cylinder is %.2f\n", 3.14 * c * c*h);
    return 0;
}