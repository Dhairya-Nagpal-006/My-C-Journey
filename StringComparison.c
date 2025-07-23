#include <stdio.h>
#include <string.h>

int main() {
    char a[8];
    char b[8];

    // Char-by-char input for 'a'
    for (int i = 0; i < 7; i++) {
        scanf(" %c", &a[i]);
    }
    a[7] = '\0';

    // Flush leftover newline from previous input
    while ((getchar()) != '\n');

    gets(b);

    // Compare both strings
    if (strcmp(a, b) == 0) {
        printf("SAME STRINGS");
    } else {
        printf("DIFFERENT STRINGS");
    }

    return 0;
}