#include <stdio.h>

int main() {
    int marks[5];
//     printf("Enter the marks of student 1\n:");
//     scanf("%d", &marks[0]);
//     printf("Enter the marks of student 2:\n");
//      scanf("%d", &marks[1]);
//      printf("Enter the marks of student 2:\n");
//      scanf("%d", &marks[2]);
//      printf("Enter the marks of student 2:\n");
//      scanf("%d", &marks[3]);
//      printf("Enter the marks of student 2:\n");
//      scanf("%d", &marks[4]);

//      printf("%d %d %d %d %d\n",marks[0], marks[1], marks[2], marks[3], marks[4]);


for (int i = 0;i<5;i++){
    printf("Enter the marks of student %d\n:",i);
    scanf("%d", &marks[i]);
}
    printf("The marks of the students are %d %d %d %d %d\n",marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}