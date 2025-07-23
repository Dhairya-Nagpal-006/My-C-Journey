#include <stdio.h>

int main(){
    int a;
    printf("ENTER THE MARKS :");
    scanf("%d",&a);

    if (a<=100 && a>=90){
        printf("GRADE IS A");
    }
    else if (a<90 && a>=80){
        printf("GRADE IS B");
    }
    else if (a<80 && a>70){
        printf("GRADE IS C");
    }
    else if (a<70 && a>60){
        printf("GRADE IS D");
    }
    else if (a<60 && a>50){
        printf("GRADE IS E");
    }
    else {
        printf("GRADE IS F");
    }
    return 0;
}