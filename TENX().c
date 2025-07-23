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