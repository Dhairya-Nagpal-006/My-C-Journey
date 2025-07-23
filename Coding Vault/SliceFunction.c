#include <stdio.h>
char *slice(char s[], int m, int n)
{
    int i = 0;
    char *ptr1 = &s[m];
    char *ptr2 = &s[n];

    s = ptr1;
    s[n] = '\0';
    return s;
}

int main()
{
    char s[] = "DHAIRYA NAGPAL";
    printf("%s",slice(s ,1, 10));

    return 0;
}