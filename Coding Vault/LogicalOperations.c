#include <stdio.h>

int main(){
   int a,b;
   printf("ENTER THE VALUE OF A & B IN 0 OR 1");
   scanf("%d",&a);
   scanf("%d",&b);
   printf("The value of a & b is %d\n",a&&b);
   printf("The value of a & b is %d\n",a||b);
   printf("The value of not(A) is %d\n",!a);
   printf("The value of not(B) is %d\n",!b);
    return 0;
}