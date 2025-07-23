#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Dhairya";
    printf("%d\n",strlen(s));

    char e[20];
    strcpy(e,s);
    printf("%s\n",e);


    char s1[50] = "NAGPAL";
    strcat(s,s1);
    strcat(s1,s);
    printf("%s\n",s);
    printf("%s\n",s1);


    int a = strcmp("fake","joker");
    int b = strcmp("joker","fake");
    int c = strcmp("me","me");

    printf("%d   %d   %d",a,b,c);
    
    return 0;
}