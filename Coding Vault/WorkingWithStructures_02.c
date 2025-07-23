#include <stdio.h>
#include <string.h>
typedef struct employee
{
  int code;
  float salary;
  char name[10];
}Emp ;
int main() {
    char a[10] = "DHAIRYA";
    Emp e1;
    Emp *ptr1;
    ptr1 = &e1;
    strcpy(e1.name,a);
    e1.salary = 544.05;
    e1.code = 4855;

    printf("%d  %f  %s\n", e1.code, e1.salary, e1.name);
     printf("%d  %f  %s\n", ptr1->code, ptr1->salary, ptr1->name);
    return 0;
}