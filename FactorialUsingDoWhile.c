#include <stdio.h>

int main() {
    int a;
    int b=1;
    int c=1;
    printf("Enter a number: ");
    scanf("%d", &a);
    do {
        c *= b;
        b++;
    } while (b <= a);
    printf("The factorial is %d\n", c);
    return 0;
}
// agar bhot zyada bada number enter kiya to overflow ho jayega
// isko handle karne ke liye long long int use karna padega
// long long int c=1;
// isse overflow ka problem solve ho jayega