#include <stdio.h>
#include <string.h>
struct employee
{
  int code;
  float salary;
  char name[10];
};
int main()
{
  struct employee e1, e2;
  strcpy(e1.name, "DHAIRYA");
  e1.salary = 544.05;
  e1.code = 4855;
  struct employee *ptr;
  ptr = &e1;

  printf("%d  %f  %s\n", e1.code, e1.salary, e1.name);
  printf("%d\n", (*ptr).code);
  printf("%d\n", ptr ->code);

  return 0;
}