#include <stdio.h>

int main() {
    int marks[] = {15,20,25,30,35,40};
    int*ptr = &marks[0];
   for (int i = 0; i<6; i++)
   {
        printf("The marks at index %d is %d\n",i,marks[i]);
        printf("The address of marks at index %d is %u\n", i, &marks[i]);
        ptr++;
   }
    return 0;
}