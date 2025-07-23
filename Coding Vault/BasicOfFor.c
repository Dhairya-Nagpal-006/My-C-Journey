#include <stdio.h>

int main() {
    for (int i = 0; i < 15; i++) {
        if (i == 10) {
            continue; // Skip this iteration and continue with the next one
        }
        printf("The value of i is %d\n", i);
    }
    printf("For loop is done\n");
    return 0;
}