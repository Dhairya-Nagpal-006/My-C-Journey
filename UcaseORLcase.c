#include <stdio.h>

int main() {
    char a;
    printf("Enter the char:\n");
    scanf("%c", &a);
    
    if (a >= 'a' && a <= 'z')
        printf("Lowercase\n");
    else if (a >= 'A' && a <= 'Z')
        printf("Uppercase\n");
    else
        printf("Not an alphabet\n");
  printf("The ASCII value of entered character is %d",a);

    return 0;
}
