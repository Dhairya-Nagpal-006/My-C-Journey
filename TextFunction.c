#include <stdio.h>
void gud_mrng();
void gud_aftrn();
void gud_even();

void gud_mrng() {
    printf("Good Morning!\n");
}
void gud_aftrn() {
    printf("Good Afternoon!\n");
}
void gud_even() {
    printf("Good Evening!\n");
}

int main() {
    gud_mrng();
    gud_aftrn();
    gud_even();
    
    return 0;
}