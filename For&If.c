#include <stdio.h>

int main() {
    for (int i = 0; i < 15; i++) {
        if (i == 10) {
            break; // Exit the loop now
        }
        printf("The value of i is %d\n", i);
    }
    printf("For loop is done\n");
    return 0;
}