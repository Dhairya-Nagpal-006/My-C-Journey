#include <stdio.h>
#include <strings.h>
int main() {
    char a[] = "ANY MESSAGE DO YOU NEED ENCRYPTED";
    for(int i=0;i<strlen(a);i++){
        a[i] = a[i] +1;
    }
    printf("%s",a);

    return 0;
}