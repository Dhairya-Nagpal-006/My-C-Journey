#include <stdio.h>

int main() {
    char s[] = "DHAIRYA";
    int i = 0;
    char d = s[i];
    while(d!= '\0'){
        d = s[i];
        i++;
    }
    printf("%d",i-1);// i will count null character also
    return 0;
}