# include <stdio.h>
int main(){
    int a;
    printf("A=??");
    scanf("%d",&a);

    switch (a){
        case 1 :
            printf("You entered 1\n");
            break;
        case 2 :
            printf("You entered 2\n");
            break;
        case 3 :
            printf("You entered 3\n");
            break;
        case 4 :
            printf("You entered 4\n");
            break;
        case 5 :
            printf("You entered 5\n");
            break;
        case 6 :
            printf("You entered 6\n");
            break;
        case 7 :
            printf("You entered 7\n");
            break;
        case 8 :
            printf("You entered 8\n");
            break;
        default :
            printf("Nothing Matched\n");
            break;
    }

    return 0;
}