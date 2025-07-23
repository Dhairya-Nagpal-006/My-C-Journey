#include <stdio.h>
struct bank{
    int acc;
    char name[20];
    int dob;
    int contact;
    char place[20];

};


int main() {
    struct bank b[3];
    for(int i = 0; i<3 ; i++){
    printf("ENTER ACCOUNT NUMBER\n");
    scanf("%d",&b[i].acc);
    printf("ENTER NAME\n");
    scanf("%s",&b[i].name);
    printf("ENTER DATE OF BIRTH\n");
    scanf("%d",&b[i].dob);
    printf("ENTER CONTACT NUMBER\n");
    scanf("%d",&b[i].contact);
    printf("ENTER NATIVE PLACE\n");
    scanf("%s",&b[i].place);
    }
    for(int i = 0; i<3 ; i++){
        printf("%d %s %d %s %d\n",b[i].acc,b[i].name,b[i].dob,b[i].place,b[i].contact);
    }
    return 0;
}