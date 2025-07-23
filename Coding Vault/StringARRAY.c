#include <stdio.h>

int main() {
    char a[] = {'D','H','A','I','R','Y','A','\0'};
    char b[] = "NAGPAL";
    for (int i = 0; i<8;i++){// Here 8 is beacuse I want to print the null character as well
        printf("Character is %c\n",a[i]);
    }

    for (int i = 0; i<7;i++){
        printf("Character is %c\n",b[i]);
    }


    printf("%s",a);
    printf("\n");
    printf("%s",b);
    return 0;
}