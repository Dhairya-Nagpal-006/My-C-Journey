#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("text3.txt","w");
    char a[20],b[20];
    int c,d;
    printf("ENTER THE NAME");
    scanf("%s",&a);
    printf("ENTER THE SALARY");
    scanf("%d",&c);
    fprintf(ptr,"%s,%d\n",a,c);
    printf("ENTER THE NAME");
    scanf("%s",&b);
    printf("ENTER THE SALARY");
    scanf("%d",&d);
    fprintf(ptr,"%s,%d\n",b,d);

    fclose(ptr);
    return 0;
}