#include <stdio.h>
#include<string.h>
struct school{
    int roll;
    float gpa;
    char name[20];
};
void show(struct school *s){
    char a[20];
    printf("ENTER THE NAME\n");
    scanf("%s",&s->name);
    printf("ENTER THE GPA\n");
    scanf("%f",&s->gpa);
    printf("ENTER THE ROLL NO\n");
    scanf("%d",&s->roll);
    printf("%d  %f  %s\n", s->roll,s->gpa,s->name);
}

int main() {
    struct school s1;
    show(&s1);

    
    return 0;
}