# include <stdio.h>
int main(){
    int a;
    printf("A=??");
    scanf("%d",&a);

    switch (a){
        case 1 :
            printf("You entered 1\n");
        case 2 :
            printf("You entered 2\n");
        case 3 :
            printf("You entered 3\n");
        case 4 :
            printf("You entered 4\n");
        case 5 :
            printf("You entered 5\n");
        case 6 :
            printf("You entered 6\n");
        case 7 :
            printf("You entered 7\n");
        case 8 :
            printf("You entered 8\n");
        default :
            printf("Nothing Matched\n");
    }

    return 0;
}