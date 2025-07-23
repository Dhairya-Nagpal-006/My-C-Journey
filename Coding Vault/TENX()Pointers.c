/*
 #include <stdio.h>
 void tenx(int*a){
    *a=*a*10;
 }
 
 int main() {
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("The value of a before calling tenx is %d\n",a);
    tenx(&a);
    printf("The value of a after calling tenx is %d\n",a);

    
    return 0;
 }
*/


#include <stdio.h>
int tenx(int a);
int tenx(int a) {
    a = a * 10;
    printf("The value of the number *10  is %d\n", a);
    return a*10;
}

int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);    
    printf("The value of x before calling tenx is %d\n", x);
    
    printf("The value of x after calling tenx is %d\n", x);
    
    return 0;
}