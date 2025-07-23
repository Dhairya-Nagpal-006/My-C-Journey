// A SIMPLE ELSE IF PROGRAM
# include <stdio.h>
int  main (){
    int a;
    printf("Enter your age :");
    scanf("%d",&a);

    if (a > 60){
        printf("You are a senior citizen and you can drink");
    }
    else if (a>40){
        printf("You are an elder and you can drink");
    }
    else if (a>18){
        printf("You can drink");
    }
    else {
        printf("You can't drink");
    }

    return 0;
}