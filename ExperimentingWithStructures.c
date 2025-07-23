#include <stdio.h>
#include <string.h>
struct college{
    int roll;
    float gpa;
    char name[10];
};
int main() {
  struct college s1,s2,s3;
  char a[10];
  char b[10];
  char c[10];
  int roll;
  float gpa;
    printf("ENTER THE NAMES\n");
    gets(a);
    gets(b);
    gets(c);


    printf("FOR FIRST STUDENT\n");
    
    strcpy(s1.name , a);
    printf("ENTER THE GPA\n");
    scanf("%f",&s1.gpa);
    printf("ENTER THE ROLL NO\n");
    scanf("%d",&s1.roll);
  

    printf("FOR SECOND STUDENT\n");
    
    strcpy(s2.name , b);
    printf("ENTER THE GPA\n");
    scanf("%f",&s2.gpa);
    printf("ENTER THE ROLL NO\n");
    scanf("%d",&s2.roll);
  

    printf("FOR THIRD STUDENT\n");
    
    strcpy(s3.name , c);
    printf("ENTER THE GPA\n");
    scanf("%f",&s3.gpa);
    printf("ENTER THE ROLL NO\n");
    scanf("%d",&s3.roll);
  
    printf("%d  %f  %s\n", s1.roll, s1.gpa, s1.name);
    printf("%d  %f  %s\n", s2.roll, s2.gpa, s2.name);
    printf("%d  %f  %s\n", s3.roll, s3.gpa, s3.name);
    
    return 0;
}