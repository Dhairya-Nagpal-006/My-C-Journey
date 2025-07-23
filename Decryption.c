#include <stdio.h>
#include <strings.h>
int main() {
    char a[] = "the output of encryption.c will be used here";
    for(int i=0;i<strlen(a);i++){
        a[i] = a[i] -1;
    }
    printf("%s",a);

    return 0;
}