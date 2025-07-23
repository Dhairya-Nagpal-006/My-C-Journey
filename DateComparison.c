#include <stdio.h>
struct date{
    int dd;
    int mm;
    int yyyy;
};
void compare(struct date d1, struct date d2){
    if(d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy){
        printf("SAME DATES");
    }
    else if(d1.yyyy > d2.yyyy){
        printf("DATE 1 IS IN FUTURE");
    }
    else if(d1.yyyy < d2.yyyy){
        printf("DATE 2 IS IN FUTURE");
    }
    else if(d1.yyyy == d2.yyyy && d1.mm == d2.mm){
        if(d1.dd > d2.dd){
            printf("DATE 1 IS IN FUTURE");
        }else{
            printf("DATE 2 IS IN FUTURE");
        }
    }
    else if(d1.yyyy == d2.yyyy){
        if(d1.mm  > d2.mm){
            printf("DATE 1 IS IN FUTURE");
        }else{
            printf("DATE 2 IS IN FUTURE");
        }
    }
    
}

int main() {
    struct date d1,d2;
    printf("DATE 1\n");
    scanf("%d",&d1.dd);
    scanf("%d",&d1.mm);
    scanf("%d",&d1.yyyy);
    printf("DATE 2\n");
    scanf("%d",&d2.dd);
    scanf("%d",&d2.mm);
    scanf("%d",&d2.yyyy);


    compare(d1,d2);
    
    return 0;
}