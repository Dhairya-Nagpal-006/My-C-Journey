#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter Marks 1\n");
    scanf("%d",&a);
    printf("Enter Marks 2\n");
    scanf("%d",&b);
    printf("Enter Marks 3\n");
    scanf("%d",&c);

    
    if (a<33 || b<33 || c<33){
        printf("You are failed due to less individual marks");
    }
    else if (((a+b+c)/3)<40){
        printf("You are failed due to less overall percentage");
    }
    
       

    else
        printf("Passed !!!!!");

    return 0;
}