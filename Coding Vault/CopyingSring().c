#include <stdio.h>
#include <string.h>
void strcopy(char a[], char b[]){
    for(int i = 0; i< strlen(b); i++){
        a[i] = b[i];
    }
    a[strlen(b)] = '\0';
}
int main() {
    char s[] = "DHAIRYA NAGPAL";
    char d[30];
    strcopy(d,s);
    printf("%s %s",s,d);    
    return 0;
}